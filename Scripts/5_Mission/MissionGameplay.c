modded class MissionGameplay
{
	protected ref DebugHud m_DebugHud;
	
	override void OnMissionStart()
	{
		super.OnMissionStart();

		m_DebugHud = new DebugHud();
		GetDayZGame().OnRPCDebug.Insert(m_DebugHud.OnDebugRPC);
		//m_DebugHud.Show(false);
	}

	override void OnMissionFinish()
	{
		super.OnMissionFinish();

		delete m_DebugHud;
	}
	
	override void OnUpdate(float timeslice)
	{        
		super.OnUpdate(timeslice); 

		if (m_DebugHud) {
			if (GetGame().GetInput().LocalPress("UAToggleDebugHUD") && !GetGame().GetUIManager().GetMenu()) {
				m_DebugHud.Show(!m_DebugHud.IsVisible());
			}
			#ifdef AVPPAdminTools
			m_DebugHud.line0.SetText(string.Format("Server FPS: %1", GetDayZGame().GetServerFPS()));
			#endif
			m_DebugHud.line1.SetText(string.Format("TLC: %1", TotalLoadCount));
			m_DebugHud.line2.SetText(string.Format("BBC: %1", BBCount));
		}
    }
}