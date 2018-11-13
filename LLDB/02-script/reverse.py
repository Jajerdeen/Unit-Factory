import lldb

def reverse(debugger, command, result, internal_dict):
	print "FT_" + str(debugger.GetSelectedTarget())[::-1]