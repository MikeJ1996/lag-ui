modded class DayZGame
{
	ref ScriptInvoker OnRPCDebug = new ScriptInvoker();

	override void OnRPC(PlayerIdentity sender, Object target, int rpc_type, ParamsReadContext ctx)
	{
		super.OnRPC(sender, target, rpc_type, ctx);
		
		if (rpc_type != 36393921 && rpc_type != 4) {
			OnRPCDebug.Invoke(rpc_type);
		}
	}
}