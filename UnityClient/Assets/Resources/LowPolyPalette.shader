Shader "UniversalRPG/LowPolyPalette"
{
    Properties
    {
        _MainTex ("Palette Atlas (RGBA)", 2D) = "white" {}
        _Color ("Tint Color", Color) = (1, 1, 1, 1)
        _SkinTint ("Skin Color", Color) = (1, 1, 1, 1)
        _HairTint ("Hair Color", Color) = (1, 1, 1, 1)
        _ClothTint ("Clothes Color", Color) = (1, 1, 1, 1)
        _PantsTint ("Trouser Color", Color) = (1, 1, 1, 1)
        _ClothAccentTint ("Clothes Accent Color", Color) = (1, 1, 1, 1)
        _IrisTint ("Iris Color", Color) = (1, 1, 1, 1)
        _SkinTintEnabled ("Use Skin Color", Float) = 0
        _HairTintEnabled ("Use Hair Color", Float) = 0
        _ClothTintEnabled ("Use Clothes Color", Float) = 0
        _PantsTintEnabled ("Use Trouser Color", Float) = 0
        _ClothAccentTintEnabled ("Use Clothes Accent Color", Float) = 0
        _IrisTintEnabled ("Use Iris Color", Float) = 0
        _AmbientColor ("Ambient Color", Color) = (0.35, 0.35, 0.38, 1)
        _LightDirection ("Light Direction", Vector) = (0.5, 1.0, -0.7, 0)
    }
    SubShader
    {
        Tags { "RenderType"="Opaque" "Queue"="Geometry" }
        LOD 100
        Cull Back

        Pass
        {
            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            #pragma target 3.0

            #include "UnityCG.cginc"

            struct appdata
            {
                float4 vertex : POSITION;
                float2 uv : TEXCOORD0;
                float2 tintRegion : TEXCOORD1;
                float3 normal : NORMAL;
            };

            struct v2f
            {
                float4 pos : SV_POSITION;
                float2 uv : TEXCOORD0;
                float3 worldPos : TEXCOORD1;
                float3 worldNormal : NORMAL;
                float tintRegion : TEXCOORD2;
            };

            sampler2D _MainTex;
            float4 _MainTex_ST;
            float4 _Color;
            float4 _SkinTint;
            float4 _HairTint;
            float4 _ClothTint;
            float4 _PantsTint;
            float4 _ClothAccentTint;
            float4 _IrisTint;
            float _SkinTintEnabled;
            float _HairTintEnabled;
            float _ClothTintEnabled;
            float _PantsTintEnabled;
            float _ClothAccentTintEnabled;
            float _IrisTintEnabled;
            float4 _AmbientColor;
            float4 _LightDirection;

            v2f vert (appdata v)
            {
                v2f o;
                o.pos = UnityObjectToClipPos(v.vertex);
                o.uv = TRANSFORM_TEX(v.uv, _MainTex);
                o.worldPos = mul(unity_ObjectToWorld, v.vertex).xyz;
                o.worldNormal = UnityObjectToWorldNormal(v.normal);
                o.tintRegion = v.tintRegion.x;
                return o;
            }

            fixed4 frag (v2f i) : SV_Target
            {
                // Calculate flat facet normal using screen-space derivatives
                float3 dX = ddx(i.worldPos);
                float3 dY = ddy(i.worldPos);
                float3 flatNormal = cross(dY, dX);
                float len = length(flatNormal);
                float3 n = len > 0.0001 ? normalize(flatNormal) : normalize(i.worldNormal);

                // Lighting
                float3 lightDir = normalize(_LightDirection.xyz);
                float ndotl = max(0.0, dot(n, lightDir));
                float3 diffuse = _AmbientColor.rgb + (ndotl * 0.65);

                fixed4 col = tex2D(_MainTex, i.uv) * _Color;
                if (_SkinTintEnabled > 0.5 && i.tintRegion == 1.0)
                    col.rgb = _SkinTint.rgb;
                else if (_HairTintEnabled > 0.5 && i.tintRegion == 2.0)
                    col.rgb = _HairTint.rgb;
                else if (_ClothTintEnabled > 0.5 && i.tintRegion == 3.0)
                    col.rgb = _ClothTint.rgb;
                else if (_PantsTintEnabled > 0.5 && i.tintRegion == 4.0)
                    col.rgb = _PantsTint.rgb;
                else if (_ClothAccentTintEnabled > 0.5 && i.tintRegion == 5.0)
                    col.rgb = _ClothAccentTint.rgb;
                else if (_IrisTintEnabled > 0.5 && i.tintRegion == 6.0)
                    col.rgb = _IrisTint.rgb;
                return fixed4(col.rgb * diffuse, col.a);
            }
            ENDCG
        }
    }
    FallBack "Diffuse"
}
