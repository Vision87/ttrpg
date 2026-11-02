# Universal RPG Board

Universal RPG Board is a multi-system tabletop RPG engine with an authoritative session contract and a Unity WebGL client.

## Character Creation Step Summary Header

The character creation UI includes a step summary header above the navigation bar:
- Component: `StepSummaryHeader.cs`
- Configuration: `StepSummaryData.asset` (`UnityClient/Assets/Data/StepSummaryData.asset`)
- Responsive breakpoint: `ResponsiveStepHeader.cs` (switches to vertical layout on screens < 600px)
- See `UnityClient/README.md` for full client build and usage details.
