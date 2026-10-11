using System;
using UnityEngine;

[Serializable]
public class SessionSnapshotDto
{
    public string session_id;
    public EntityDto[] entities;
    public TilemapDto tilemap;
}

[Serializable]
public class TilemapDto
{
    public int width;
    public int height;
    public TileDto[] tiles;
}

[Serializable]
public class TileDto
{
    public int x;
    public int y;
    public string terrain;
    public bool walkable;
    public bool blocks_vision;
}

[Serializable]
public class EntityDto
{
    public string id;
    public string kind;
    public PositionDto position;
    public int hit_points;
    public string animation_state;
}

[Serializable]
public class PositionDto
{
    public int x;
    public int y;
    public int z;
}

[Serializable]
public class AudioCueDto
{
    public string sound_ref;
    public PositionDto position;
    public float volume;
    public bool spatial;
}

[Serializable]
public class FxCueDto
{
    public string particle_ref;
    public PositionDto position;
    public PositionDto origin;
    public float duration;
    public float aoe_radius;
}

[Serializable]
public class AnimationCueDto
{
    public string entity_id;
    public string clip;
    public float duration;
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
    public AnimationCueDto animation_cue;
    public AudioCueDto audio_cue;
    public FxCueDto fx_cue;
}

[Serializable]
public class SessionEnvelopeDto
{
    public SessionSnapshotDto snapshot;
    public SessionEventDto[] events;
}
