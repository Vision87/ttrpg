# Hybrid Persistence Contract

The platform uses local durable storage for user-owned data and an
authoritative session service for shared gameplay.

```text
Local profile store
  characters, templates, packages, assets, drafts
          |
          v
Session client
  local cache + last acknowledged event
          |
          v
Authoritative session service
  campaign state + ordered event history
```

## Ownership

- Character profiles, personal templates, asset metadata, and package content
  are durable user-owned data and remain available locally.
- Campaign incarnations may be cached locally but the active shared session
  state is authoritative at the session service.
- Every accepted gameplay action receives an ordered event identity.
- A client stores its last acknowledged event position and requests events
  after that position when loading or reconnecting.
- Re-sending an action with the same idempotency key must not duplicate it.
- A rejected action must not modify the authoritative snapshot.

## Synchronization contract

```text
create/load local profile
        |
connect to session
        |
receive snapshot + event cursor
        |
submit action with idempotency key
        |
receive accepted/rejected event
        |
persist cursor and local projection
```

The first implementation can use a local process as the authoritative service
in tests. The wire and storage contracts must remain independent of the
eventual client/runtime choice.
