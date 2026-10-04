# Shared Data Conventions

## Identifiers

All persisted references use stable, opaque string identifiers. Human-readable
slugs may be included for display, but no relationship may depend on a mutable
name.

```json
{
  "id": "character-01H...",
  "type": "character",
  "version": 1
}
```

## Versions

Package, definition, asset, schema, and script API versions are explicit
metadata. A reference that affects gameplay includes both an identifier and a
resolved version or revision.

## Provenance

Calculated values and resolved definitions retain source references:

```json
{
  "source": {
    "package_id": "dnd35-core",
    "package_version": "1.0.0",
    "definition_id": "feat.power-attack"
  }
}
```

## Validation errors

Validation failures are structured and actionable:

```json
{
  "code": "missing-prerequisite",
  "path": "choices.feats[0]",
  "message": "Base attack bonus +1 is required",
  "severity": "error",
  "source": "dnd35-core@1.0.0"
}
```

## Serialization

Serialized records are self-describing, preserve unknown extension fields, and
round-trip stable references without converting identifiers to display names.
