class DebugHud: ScriptView
{
	int RPCCounter = 0;
	TextWidget line0, line1, line2, line3, line4;

	void OnDebugRPC(int rpc)
	{
		RPCCounter++;
		line3.SetText(string.Format("RPC: %1 (%2)", RPCCounter, rpc));
	}

	override string GetLayoutFile()
	{
		return "DebugUI\\GUI\\layouts\\debug.layout";
	}
}