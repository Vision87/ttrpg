using System;
using UnityEngine;

[Serializable]
public class SessionSnapshotDto
{
    public string session_id;
    public EntityDto[] entities;
}

[Serializable]
public class EntityDto
{
    public string id;
    public string kind;
    public PositionDto position;
    public int hit_points;
}

[Serializable]
public class PositionDto
{
    public int x;
    public int y;
    public int z;
}

[Serializable]
public class SessionEventDto
{
    public string id;
    public string type;
    public string actor_id;
    public string target_id;
    public PositionDto position;
    public int amount;
    public string damage_type;
}

[Serializable]
public class SessionEnvelopeDto
{
    public SessionSnapshotDto snapshot;
    public SessionEventDto[] events;
}
