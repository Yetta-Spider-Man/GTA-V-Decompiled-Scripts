#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = -1;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	float fLocal_76 = 0f;
	float fLocal_77 = 0f;
	float fLocal_78 = 0f;
	float fLocal_79 = 0f;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	int iLocal_102 = 0;
	var uLocal_103 = 0;
	float fLocal_104 = 0f;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	float fLocal_126 = 0f;
	float fLocal_127 = 0f;
	var uLocal_128 = 0;
	int iLocal_129 = 0;
	struct<22> Local_130 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<453> Local_152 = { 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 4, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 6, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -2147483647, -1, 4, -1, 0, 0, -2147483647, -1, -1, 0, 0, -2147483647, -1, -1, 0, 0, -2147483647, -1, -1, 0, 0, -2147483647, -1, 4, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 6, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 6, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, 0, -1, 0, 4, 0, 0, 0, 0, 0, -1, 0, -1, -2147483647, 0, -1, -1, -2147483647, 0, -2147483647, 0, 0, 0, -2147483647, -1, -1, 0, 0, 0, 0, 0, 1073741824, -1073741824, 0, 0 } ;
	struct<166> Local_605 = { 6, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 6, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 7, -1, -1, -2147483647, -1, -1, -2147483647, -1, -1, -2147483647, -1, -1, -2147483647, -1, -1, -2147483647, -1, -1, -2147483647, -1, -1, -2147483647, -2147483647, 4, 2, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 2, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 2, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 2, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, -1, 5, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, -2147483647, -2147483647, 3, -2147483647, 0, 0, 0, -2147483647, 0, 0, 0, -2147483647, 0, 0, 0, -2147483647, 0, 0, 0, 10 } ;
	var uLocal_771 = 0;
	var uLocal_772 = -1;
	var uLocal_773 = -1;
	var uLocal_774 = 0;
	var uLocal_775 = -1;
	var uLocal_776 = -1;
	var uLocal_777 = 0;
	var uLocal_778 = -1;
	var uLocal_779 = -1;
	var uLocal_780 = 0;
	var uLocal_781 = -1;
	var uLocal_782 = -1;
	var uLocal_783 = 0;
	var uLocal_784 = -1;
	var uLocal_785 = -1;
	var uLocal_786 = 0;
	var uLocal_787 = -1;
	var uLocal_788 = -1;
	var uLocal_789 = 0;
	var uLocal_790 = -1;
	var uLocal_791 = -1;
	var uLocal_792 = 0;
	var uLocal_793 = -1;
	var uLocal_794 = -1;
	var uLocal_795 = 0;
	var uLocal_796 = -1;
	var uLocal_797 = -1;
	var uLocal_798 = 0;
	var uLocal_799 = -1;
	var uLocal_800 = -1;
	var uLocal_801 = 4;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	int iLocal_806[4] = { 0, 0, 0, 0 };
	struct<9> Local_811[4];
	struct<16> Local_848[4];
	struct<37> Local_913[4];
	struct<17> Local_1062 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0 } ;
	var uLocal_1079 = 255;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 0;
	var uLocal_1088 = 0;
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 255;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 255;
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = 255;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113 = 255;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 255;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	var uLocal_1130 = 255;
	var uLocal_1131 = 0;
	var uLocal_1132 = 0;
	var uLocal_1133 = 0;
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 255;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 255;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	var uLocal_1156 = 0;
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
	var uLocal_1159 = 0;
	var uLocal_1160 = 255;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 255;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177 = 255;
	var uLocal_1178 = 0;
	var uLocal_1179 = 0;
	var uLocal_1180 = 0;
	var uLocal_1181 = 255;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	var uLocal_1194 = 255;
	var uLocal_1195 = 0;
	var uLocal_1196 = 0;
	var uLocal_1197 = 0;
	var uLocal_1198 = 255;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	fLocal_76 = 3f;
	fLocal_77 = 0f;
	fLocal_78 = 2f;
	fLocal_79 = 100f;
	iLocal_102 = -1;
	fLocal_104 = 0.5f;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_400(ScriptParam_0);
	}
	while (true)
	{
		func_399();
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_47();
		}
		else
		{
			func_9();
		}
		if (func_1())
		{
			func_9();
		}
	}
}

int func_1()
{
	if (Global_1575030 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_8())
	{
		return 1;
	}
	if (Global_2727490)
	{
		return 1;
	}
	if (func_7())
	{
		return 1;
	}
	if (func_6(159))
	{
		if (!func_5())
		{
			return 1;
		}
	}
	if (func_6(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_2() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_2()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_2()
{
	switch (func_4())
	{
		case 0:
			return func_3();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_3()
{
	switch (Global_2727594)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_4()
{
	return Global_31511;
}

bool func_5()
{
	return Global_2714635.f_698;
}

int func_6(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_7()
{
	return Global_2725233;
}

bool func_8()
{
	return Global_2714635.f_693;
}

void func_9()
{
	func_11();
	func_10();
}

void func_10()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_11()
{
	int iVar0;
	
	if (func_46())
	{
		Local_130.f_16 = 1;
	}
	Local_130.f_21 = func_43();
	func_42();
	func_20();
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPArcadeCabinetGrid");
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPArcadeCabinetGridTiles");
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPArcadeCabinetGridPlayerBlue");
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPArcadeCabinetGridPlayerGreen");
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPArcadeCabinetGridPlayerPurple");
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPArcadeCabinetGridPlayerYellow");
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPArcadeCabinetGridHUD");
	HUD::CLEAR_ADDITIONAL_TEXT(3, true);
	if (Local_152.f_427 != 0)
	{
		GRAPHICS::_RELEASE_BINK_MOVIE(Local_152.f_427);
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_in_menus_scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("dlc_vw_am_tw_in_menus_scene");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_in_gameplay_scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("dlc_vw_am_tw_in_gameplay_scene");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_vehicle_drivethrough_scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("dlc_vw_am_tw_vehicle_drivethrough_scene");
	}
	func_18(func_19(4));
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (Local_152.f_281[iVar0 /*7*/].f_5 >= 0)
		{
			AUDIO::STOP_SOUND(Local_152.f_281[iVar0 /*7*/].f_5);
			AUDIO::RELEASE_SOUND_ID(Local_152.f_281[iVar0 /*7*/].f_5);
		}
		if (Local_152.f_281[iVar0 /*7*/].f_6 >= 0)
		{
			AUDIO::STOP_SOUND(Local_152.f_281[iVar0 /*7*/].f_6);
			AUDIO::RELEASE_SOUND_ID(Local_152.f_281[iVar0 /*7*/].f_6);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Local_152.f_204[iVar0 /*19*/].f_7 >= 0)
		{
			AUDIO::STOP_SOUND(Local_152.f_204[iVar0 /*19*/].f_7);
			AUDIO::RELEASE_SOUND_ID(Local_152.f_204[iVar0 /*19*/].f_7);
		}
		if (Local_152.f_204[iVar0 /*19*/].f_6 >= 0)
		{
			AUDIO::STOP_SOUND(Local_152.f_204[iVar0 /*19*/].f_6);
			AUDIO::RELEASE_SOUND_ID(Local_152.f_204[iVar0 /*19*/].f_6);
		}
		if (Local_152.f_204[iVar0 /*19*/].f_8 >= 0)
		{
			AUDIO::STOP_SOUND(Local_152.f_204[iVar0 /*19*/].f_8);
			AUDIO::RELEASE_SOUND_ID(Local_152.f_204[iVar0 /*19*/].f_8);
		}
		iVar0++;
	}
	if (Local_152.f_178.f_4 >= 0)
	{
		AUDIO::STOP_SOUND(Local_152.f_178.f_4);
		AUDIO::RELEASE_SOUND_ID(Local_152.f_178.f_4);
	}
	if (Local_152.f_428 >= 0)
	{
		AUDIO::STOP_SOUND(Local_152.f_428);
		AUDIO::RELEASE_SOUND_ID(Local_152.f_428);
	}
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("DLC_VINEWOOD/DLC_VW_AM_TW");
	func_16();
	func_15(12);
	Global_1932185 = 0;
	Global_1932185.f_1 = 0;
	func_12(0);
	func_10();
}

void func_12(bool bParam0)
{
	if (bParam0)
	{
		if (!func_13(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Global_2689224[PLAYER::PLAYER_ID() /*451*/].f_427), 4);
		}
	}
	else if (func_13(PLAYER::PLAYER_ID()))
	{
		MISC::CLEAR_BIT(&(Global_2689224[PLAYER::PLAYER_ID() /*451*/].f_427), 4);
	}
}

int func_13(int iParam0)
{
	if (iParam0 != func_14())
	{
		return BitTest(Global_2689224[iParam0 /*451*/].f_427, 4);
	}
	return 0;
}

int func_14()
{
	return -1;
}

void func_15(int iParam0)
{
	Local_152.f_140 = iParam0;
}

void func_16()
{
	Local_152.f_442 = -1;
	Local_152.f_421 = 0;
	if (Local_152.f_418 != -2147483647)
	{
		Local_152.f_418 = -2147483647;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_152.f_419))
	{
		Local_152.f_419 = func_17();
	}
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		HUD::CLEAR_HELP(true);
	}
}

var func_17()
{
	var uVar0;
	
	return uVar0;
}

void func_18(char* sParam0)
{
	AUDIO::TRIGGER_MUSIC_EVENT(sParam0);
}

char* func_19(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CASINO_TW_TITLE_START";
		
		case 1:
			return "CASINO_TW_GAMEPLAY";
		
		case 2:
			return "CASINO_TW_MID_ROUND";
		
		case 3:
			return "CASINO_TW_SUDDEN_DEATH";
		
		case 4:
			return "CASINO_TW_STOP_MUSIC";
		
		default:
	}
	return "INVALID MUSIC EVENT";
}

void func_20()
{
	Global_1637074 = 0;
	func_40();
	Global_4718592.f_132672 = 0;
	func_39();
	MISC::CLEAR_BIT(&(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_887), 16);
	func_38(0, 1, 1, 0);
	func_37();
	if (func_35() && !STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_22(PLAYER::PLAYER_ID(), 1, 0, 0);
		}
		else
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		}
	}
	func_21(0, 0, -1);
	func_21(1, 0, -1);
	func_21(2, 0, -1);
	func_21(3, 0, -1);
	func_21(4, 0, -1);
	func_21(6, 0, -1);
	func_21(7, 0, -1);
	func_21(8, 0, -1);
	func_21(9, 0, -1);
	func_21(10, 0, -1);
	func_21(11, 0, -1);
	func_21(12, 0, -1);
	func_21(13, 0, -1);
	func_21(14, 0, -1);
	func_21(15, 0, -1);
	func_21(16, 0, -1);
}

void func_21(bool bParam0, bool bParam1, int iParam2)
{
	switch (iParam0)
	{
		case 5:
			if (iParam2 > -1)
			{
				Global_1644218.f_137[iParam2] = bParam1;
			}
			break;
		
		default:
			if (bParam1)
			{
				MISC::SET_BIT(&(Global_1644218.f_1046), iParam0);
			}
			else
			{
				MISC::CLEAR_BIT(&(Global_1644218.f_1046), bParam0);
			}
			break;
	}
}

void func_22(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	int iVar27;
	int iVar28;
	
	if (bParam1)
	{
		if (SCRIPT::GET_NO_LOADING_SCREEN())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(false);
		}
	}
	if (func_34())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = iParam2;
		PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			bVar1 = false;
		}
		if (!func_35())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && (PLAYER::IS_PLAYER_PLAYING(iParam0) || iParam3 == 1))
		{
			if (iParam3 && ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iParam0), false))
			{
				return;
			}
			iVar27 = PLAYER::GET_PLAYER_PED(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					NETWORK::FADE_OUT_LOCAL_PLAYER(true);
				}
				else if (bVar14 || (!func_31(PLAYER::PLAYER_ID(), 0) && !func_30()))
				{
					ENTITY::SET_ENTITY_VISIBLE(iVar27, !bVar14, false);
				}
				if (!bVar14)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar19)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(false);
					}
					Global_2689224[iParam0 /*451*/].f_251 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_27(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_26(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar27, true, false);
					}
				}
				if (!ENTITY::IS_ENTITY_ATTACHED(iVar27))
				{
					if (!bVar21)
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
					}
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iVar27, true);
				}
				else if (!bVar21)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar27, true);
				PLAYER::SET_PLAYER_INVINCIBLE(iParam0, false);
				PLAYER::_SET_PLAYER_INVINCIBLE_KEEP_RAGDOLL_ENABLED(iParam0, false);
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(iVar27) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iVar27))
				{
					PED::FINALIZE_HEAD_BLEND(iVar27);
				}
				PED::SET_PED_CAN_RAGDOLL(iVar27, true);
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == 0)
				{
					func_25();
					func_24();
				}
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					if (!bVar23)
					{
					}
				}
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				Global_2689224[iParam0 /*451*/].f_252 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2667223.f_2681)
				{
					Global_2667223.f_2681 = 0;
				}
			}
			else
			{
				if (!func_26(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar27, !bVar15, false);
					}
					if (!ENTITY::IS_ENTITY_ATTACHED(iVar27))
					{
						if (!bVar21)
						{
							ENTITY::FREEZE_ENTITY_POSITION(iVar27, bVar16);
						}
						if (!bVar16)
						{
							ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iVar27, true);
						}
					}
					if (func_23(Global_4718592.f_138376))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, true);
					}
				}
				if (Global_1575030)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, false);
				}
				else
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, true);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar27, bVar17);
				if (bVar3)
				{
					if (!PED::IS_PED_FATALLY_INJURED(iVar27) && !PED::IS_PED_IN_ANY_VEHICLE(iVar27, false))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar28);
		}
	}
}

bool func_23(int iParam0)
{
	return iParam0 == 17;
}

void func_24()
{
	struct<3> Var0;
	
	Global_2703660.f_910 = 0;
	Global_2703660.f_911 = 0;
	Global_2703660.f_912 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2703660.f_917 = -1;
	Global_2703660.f_918 = 0;
	Global_2667223.f_2692 = { Var0 };
}

void func_25()
{
	Global_2667223.f_702 = 0;
	Global_2667223.f_2735 = 0;
	Global_2667223.f_515 = 0;
	Global_2667223.f_606 = 0;
	Global_2689224[PLAYER::PLAYER_ID() /*451*/].f_214 = 0;
	Global_2667223.f_2690 = 0;
}

int func_26(int iParam0)
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
	{
		return 1;
	}
	else
	{
		iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_27(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
	}
	if (bParam0 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (PED::IS_PED_A_PLAYER(iParam1))
			{
				if (!NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (bParam0 == 1)
			{
				func_29();
			}
			else if (!BitTest(Global_2621446.f_67, 1))
			{
				if (BitTest(Global_2621446.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(iVar1, Global_2621446.f_58[iVar1]);
						iVar1++;
					}
				}
				MISC::SET_BIT(&(Global_2621446.f_67), true);
			}
		}
		if (func_31(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(bParam0, iParam1, true);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(bParam0, iParam1);
		}
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(bParam0, iParam1);
		func_28(joaat("mpply_is_char_spectating"), bParam0);
	}
}

void func_28(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, bParam1, true);
	}
}

void func_29()
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
	{
		if (!BitTest(Global_2621446.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2621446.f_58[iVar0] = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
				iVar0++;
			}
			MISC::SET_BIT(&(Global_2621446.f_67), 2);
			MISC::SET_BIT(&(Global_2621446.f_67), false);
		}
	}
}

bool func_30()
{
	return BitTest(Global_2621446, 3);
}

bool func_31(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_32(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853131[iParam0 /*888*/].f_205 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_32(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_33();
	}
	if (Global_1575034[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574909[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_33()
{
	return Global_1574915;
}

int func_34()
{
	if (BitTest(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_887, 2) && !Global_2715551.f_2846.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

int func_35()
{
	if (func_36() == 0)
	{
		return 1;
	}
	return 0;
}

int func_36()
{
	return Global_1574631.f_18;
}

void func_37()
{
	if (Global_2703660.f_833.f_10)
	{
		Global_2703660.f_833.f_10 = 0;
	}
}

int func_38(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::_0xA0FE76168A189DDB() != bParam0 && iParam2)
		{
			CUTSCENE::_0x20746F7B1032A3C7(bParam0, bParam1, true, bParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_39()
{
	if (Global_1932667)
	{
	}
	Global_1932667 = 0;
}

void func_40()
{
	if (!Global_1574745)
	{
		return;
	}
	func_41();
}

void func_41()
{
	Global_1574745 = 0;
	StringCopy(&(Global_1574745.f_1), "", 32);
	Global_1574745.f_9 = 0;
}

void func_42()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Local_130))
	{
		return;
	}
	if (Local_130.f_19 == 0)
	{
		return;
	}
	Local_130.f_19 = (NETWORK::GET_NETWORK_TIME_ACCURATE() - Local_130.f_19);
	STATS::_PLAYSTATS_ARCADEGAME(MISC::GET_HASH_KEY(&Local_130), Local_130.f_16, Local_130.f_17, Local_130.f_18, Local_130.f_19, Local_130.f_20, Local_130.f_21);
}

int func_43()
{
	if (PLAYER::PLAYER_ID() != func_14())
	{
		switch (func_44())
		{
			case 17:
				return 2003554330;
				break;
			
			case 15:
				return 729976867;
				break;
			
			default:
				return 0;
				break;
		}
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_44()
{
	return func_45(Global_1946941.f_503);
}

int func_45(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
		
		case 148:
			return 21;
			break;
		
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
			break;
		
		case 154:
			return 23;
			break;
		
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
	}
	return -1;
}

int func_46()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Local_913[iVar0 /*37*/].f_25)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_47()
{
	func_356();
	func_100();
	func_51();
	func_48();
}

void func_48()
{
	func_50();
	if (!func_49())
	{
		HUD::HIDE_HELP_TEXT_THIS_FRAME();
	}
}

bool func_49()
{
	return BitTest(Local_152.f_417, 0);
}

void func_50()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Local_913[iVar0 /*37*/].f_25)
		{
			Local_811[iVar0 /*9*/] = { Local_913[iVar0 /*37*/] };
			Local_848[iVar0 /*16*/] = { Local_913[iVar0 /*37*/].f_9 };
		}
		iVar0++;
	}
}

void func_51()
{
	if (!Local_152.f_178.f_1)
	{
		return;
	}
	switch (Local_605.f_145)
	{
		case 0:
			func_98();
			break;
		
		case 1:
			func_92();
			break;
		
		case 2:
			func_86();
			break;
		
		case 3:
			func_85();
			break;
		
		case 4:
			func_65();
			break;
		
		case 5:
			func_52();
			break;
		
		case 6:
			break;
		
		case 7:
			break;
	}
}

void func_52()
{
	if (NETWORK::GET_NETWORK_TIME() < Local_605.f_147 + 5000)
	{
		return;
	}
	if (func_64())
	{
		func_63(2);
		return;
	}
	func_53();
	func_63(6);
}

void func_53()
{
	struct<3> Var0;
	int iVar43;
	
	Var0 = 14;
	Var0.f_1.f_1 = -1;
	Var0.f_1.f_2 = -1;
	Var0.f_1.f_3.f_1 = -1;
	Var0.f_1.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	iVar43 = 0;
	while (iVar43 <= 3)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar43)) && !Local_913[iVar43 /*37*/].f_25)
		{
		}
		else if (Local_811[iVar43 /*9*/].f_6 == -1)
		{
		}
		else
		{
			Var0[iVar43 /*3*/] = Local_811[iVar43 /*9*/].f_7;
			Var0[iVar43 /*3*/].f_1 = Local_811[iVar43 /*9*/].f_8;
			Var0[iVar43 /*3*/].f_2 = iVar43;
		}
		iVar43++;
	}
	iVar43 = 0;
	while (iVar43 <= 9)
	{
		Var0[iVar43 + 4 /*3*/] = Local_605.f_165[iVar43 /*3*/];
		Var0[iVar43 + 4 /*3*/].f_2 = Local_605.f_165[iVar43 /*3*/].f_2;
		Var0[iVar43 + 4 /*3*/].f_1 = Local_605.f_165[iVar43 /*3*/].f_1;
		iVar43++;
	}
	func_62(&Var0, 0, 13);
	iVar43 = 0;
	while (iVar43 <= 9)
	{
		Local_605.f_165[iVar43 /*3*/] = Var0[iVar43 /*3*/];
		Local_605.f_165[iVar43 /*3*/].f_2 = Var0[iVar43 /*3*/].f_2;
		Local_605.f_165[iVar43 /*3*/].f_1 = Var0[iVar43 /*3*/].f_1;
		func_54(func_56(PLAYER::PLAYER_ID()), 0, iVar43, Local_605.f_165[iVar43 /*3*/], Local_605.f_165[iVar43 /*3*/].f_1, 0);
		iVar43++;
	}
}

void func_54(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5)
{
	struct<7> Var0;
	int iVar7;
	
	Var0.f_0 = -1605670950;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam2;
	Var0.f_4 = uParam3;
	Var0.f_5 = uParam4;
	Var0.f_6 = iParam5;
	iVar7 = func_55(iParam0);
	if (!iVar7 == 0)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 7, iVar7);
	}
}

var func_55(bool bParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_56(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_14())
	{
		return iParam0;
	}
	if (func_60(iParam0) != -1)
	{
		iVar0 = func_45(func_60(iParam0));
		if ((iVar0 == 2 || iVar0 == 1) || iVar0 == 0)
		{
			if (func_58(iParam0, 0))
			{
				return func_57(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_14();
		}
		return Global_2689224[iParam0 /*451*/].f_317.f_9;
	}
	return func_14();
}

int func_57(int iParam0)
{
	if (iParam0 != func_14())
	{
		return Global_1893551[iParam0 /*599*/].f_10;
	}
	return func_14();
}

bool func_58(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_59(iParam0))
		{
			return 0;
		}
	}
	return Global_1893551[iParam0 /*599*/].f_10 != func_14();
}

int func_59(int iParam0)
{
	if (iParam0 != func_14())
	{
		if (Global_1893551[iParam0 /*599*/].f_10 != func_14())
		{
			return Global_1893551[iParam0 /*599*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_60(int iParam0)
{
	if (iParam0 != func_14())
	{
		if (func_61(iParam0, 1, 1))
		{
			return Global_2689224[iParam0 /*451*/].f_317.f_6;
		}
		else if (((Global_1575054 || Global_2667223.f_2680) && iParam0 == PLAYER::PLAYER_ID()) && func_61(iParam0, 1, 0))
		{
			return Global_2689224[iParam0 /*451*/].f_317.f_6;
		}
	}
	return -1;
}

int func_61(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (iVar0 == Global_2703660.f_3)
				{
					return Global_2703660.f_2;
				}
				else if (Global_2689224[iVar0 /*451*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_62(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	
	iVar2 = (uParam0[((iParam1 + iParam2) / 2) /*3*/])->f_1;
	Var3.f_1 = -1;
	Var3.f_2 = -1;
	iVar0 = iParam1;
	iVar1 = iParam2;
	while (iVar0 <= iVar1)
	{
		while ((uParam0[iVar0 /*3*/])->f_1 > iVar2 && iVar0 < iParam2)
		{
			iVar0++;
		}
		while (iVar2 > (uParam0[iVar1 /*3*/])->f_1 && iVar1 > iParam1)
		{
			iVar1 = (iVar1 - 1);
		}
		if (iVar0 <= iVar1)
		{
			Var3.f_0 = (*uParam0)[iVar0 /*3*/];
			Var3.f_2 = (uParam0[iVar0 /*3*/])->f_2;
			Var3.f_1 = (uParam0[iVar0 /*3*/])->f_1;
			(*uParam0)[iVar0 /*3*/] = (*uParam0)[iVar1 /*3*/];
			(uParam0[iVar0 /*3*/])->f_2 = (uParam0[iVar1 /*3*/])->f_2;
			(uParam0[iVar0 /*3*/])->f_1 = (uParam0[iVar1 /*3*/])->f_1;
			(*uParam0)[iVar1 /*3*/] = Var3.f_0;
			(uParam0[iVar1 /*3*/])->f_2 = Var3.f_2;
			(uParam0[iVar1 /*3*/])->f_1 = Var3.f_1;
			iVar0++;
			iVar1 = (iVar1 - 1);
		}
	}
	if (iVar0 < iParam2)
	{
		func_62(uParam0, iVar0, iParam2);
	}
	if (iParam1 < iVar1)
	{
		func_62(uParam0, iParam1, iVar1);
	}
}

void func_63(int iParam0)
{
	if (!Local_152.f_178.f_1)
	{
		return;
	}
	Local_605.f_145 = iParam0;
}

int func_64()
{
	int iVar0;
	int iVar1;
	
	if (Local_152.f_148 <= 1)
	{
		return 0;
	}
	if (Local_605.f_137 >= Local_605.f_138)
	{
		return 0;
	}
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Local_605.f_138) / 2f));
	if (Local_605.f_137 > iVar0)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)) && !Local_913[iVar1 /*37*/].f_25)
			{
			}
			else if (Local_811[iVar1 /*9*/].f_6 == -1)
			{
			}
			else if (Local_605.f_139[Local_811[iVar1 /*9*/].f_6] > iVar0)
			{
				return 0;
			}
			iVar1++;
		}
	}
	return 1;
}

void func_65()
{
	int iVar0;
	
	func_79();
	func_74(0, 0);
	func_70();
	if (!func_69())
	{
		return;
	}
	iVar0 = func_67();
	if (iVar0 == -1)
	{
		func_74(1, 1);
		Local_605.f_162 = 1;
		return;
	}
	Local_605.f_139[Local_811[iVar0 /*9*/].f_6]++;
	Local_605.f_131[Local_605.f_137] = iVar0;
	Local_605.f_137++;
	Local_605.f_147 = NETWORK::GET_NETWORK_TIME();
	if (!func_64())
	{
		Local_605.f_130 = func_66();
	}
	func_63(5);
}

int func_66()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = -1;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 <= 3)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2)) && !Local_913[iVar2 /*37*/].f_25)
		{
		}
		else if (Local_811[iVar2 /*9*/].f_6 == -1)
		{
		}
		else if (Local_605.f_139[Local_811[iVar2 /*9*/].f_6] > iVar1)
		{
			iVar0 = iVar2;
			iVar1 = Local_605.f_139[Local_811[iVar2 /*9*/].f_6];
		}
		else if (iVar0 > -1 && Local_605.f_139[Local_811[iVar2 /*9*/].f_6] == iVar1)
		{
			if (Local_811[iVar2 /*9*/].f_8 + iLocal_806[Local_811[iVar2 /*9*/].f_6]) > (Local_811[iVar0 /*9*/].f_8 + iLocal_806[Local_811[iVar0 /*9*/].f_6])
			{
				iVar0 = iVar2;
			}
		}
		iVar2++;
	}
	return iVar0;
}

int func_67()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = -1;
	iVar2 = 0;
	iVar3 = 0;
	iVar4 = 1;
	iVar2 = 0;
	while (iVar2 <= 3)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2)) && !Local_913[iVar2 /*37*/].f_25)
		{
		}
		else if (Local_811[iVar2 /*9*/].f_6 == -1)
		{
		}
		else
		{
			if (!Local_605.f_163)
			{
				if (Local_605.f_162 && func_68(iVar2))
				{
				}
				else
				{
					if (Local_605.f_162)
					{
						iVar4 = 0;
					}
					if (iLocal_806[Local_811[iVar2 /*9*/].f_6] > iVar1)
					{
						iVar0 = iVar2;
						iVar1 = iLocal_806[Local_811[iVar2 /*9*/].f_6];
						iVar3 = 0;
					}
					else if (iLocal_806[Local_811[iVar2 /*9*/].f_6] == iVar1)
					{
						iVar3 = 1;
					}
				}
				iVar2++;
				if (iVar3 && !Local_605.f_163)
				{
					iVar0 = -1;
				}
				if (iVar4 && Local_605.f_162)
				{
					Local_605.f_163 = 1;
				}
				return iVar0;
			}

int func_68(int iParam0)
{
	if (Local_811[iParam0 /*9*/] == 3)
	{
		return 1;
	}
	if (Local_811[iParam0 /*9*/] == 4)
	{
		return 1;
	}
	return 0;
}

int func_69()
{
	if (!Local_605.f_162 && NETWORK::GET_NETWORK_TIME() > (Local_605.f_146 + 120000))
	{
		return 1;
	}
	if (Local_152.f_147 <= 1)
	{
		return 1;
	}
	return 0;
}

void func_70()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	
	if (!Local_152.f_178.f_1)
	{
		return;
	}
	if (NETWORK::GET_NETWORK_TIME() < Local_605.f_161 + 15000)
	{
		return;
	}
	Local_605.f_161 = NETWORK::GET_NETWORK_TIME();
	if (func_73())
	{
		bVar3 = func_73();
		bVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 13);
		if ((bVar0 % 2) != 0)
		{
			bVar0++;
			if (bVar0 >= 13)
			{
				bVar0 = false;
			}
		}
		bVar1 = func_72(bVar3, 8, 0);
		iVar2 = func_72(bVar3, 0, 1);
	}
	else
	{
		bVar4 = func_73();
		bVar0 = func_72(bVar4, 12, 0);
		bVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 9);
		if ((bVar1 % 2) != 0)
		{
			bVar1++;
			if (bVar1 >= 9)
			{
				bVar1 = false;
			}
		}
		iVar2 = func_72(bVar4, 2, 3);
	}
	Local_605.f_148[0 /*4*/] = NETWORK::GET_NETWORK_TIME() + 1000;
	Local_605.f_148[0 /*4*/].f_1 = func_71(bVar0, bVar1);
	Local_605.f_148[0 /*4*/].f_2 = iVar2;
	Local_605.f_148[0 /*4*/].f_3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
}

int func_71(bool bParam0, bool bParam1)
{
	return (bParam0 + bParam1 * 13);
}

int func_72(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_73()
{
	if (BitTest(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_74(bool bParam0, bool bParam1)
{
	int iVar0;
	
	if (!Local_152.f_178.f_1)
	{
		return;
	}
	if (Local_605.f_162 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Local_605.f_62[iVar0 /*3*/].f_2 == -2147483647)
		{
		}
		else if (NETWORK::GET_NETWORK_TIME() < Local_605.f_62[iVar0 /*3*/].f_2 + 17500)
		{
		}
		else
		{
			Local_605.f_62[iVar0 /*3*/] = -1;
			Local_605.f_62[iVar0 /*3*/].f_1 = -1;
			Local_605.f_62[iVar0 /*3*/].f_2 = -2147483647;
		}
		iVar0++;
	}
	if (NETWORK::GET_NETWORK_TIME() < Local_605.f_84 + 20000 && !bParam0)
	{
		return;
	}
	Local_605.f_84 = NETWORK::GET_NETWORK_TIME();
	if (bParam1)
	{
		func_78();
	}
	else if ((NETWORK::GET_NETWORK_TIME() - Local_605.f_146) < 20000)
	{
		func_77();
	}
	else if ((NETWORK::GET_NETWORK_TIME() - Local_605.f_146) >= 20000 && (NETWORK::GET_NETWORK_TIME() - Local_605.f_146) < 60000)
	{
		func_76();
	}
	else if ((NETWORK::GET_NETWORK_TIME() - Local_605.f_146) < 102500)
	{
		func_75();
	}
}

void func_75()
{
	int iVar0;
	int iVar1;
	
	iVar0 = NETWORK::GET_NETWORK_TIME();
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
	switch (iVar1)
	{
		case 0:
			Local_605.f_62[0 /*3*/].f_1 = 6;
			Local_605.f_62[0 /*3*/] = 32;
			Local_605.f_62[0 /*3*/].f_2 = iVar0;
			Local_605.f_62[1 /*3*/].f_1 = 4;
			Local_605.f_62[1 /*3*/] = 56;
			Local_605.f_62[1 /*3*/].f_2 = iVar0;
			Local_605.f_62[2 /*3*/].f_1 = 4;
			Local_605.f_62[2 /*3*/] = 60;
			Local_605.f_62[2 /*3*/].f_2 = iVar0;
			Local_605.f_62[3 /*3*/].f_1 = 6;
			Local_605.f_62[3 /*3*/] = 84;
			Local_605.f_62[3 /*3*/].f_2 = iVar0;
			Local_605.f_62[4 /*3*/].f_1 = 0;
			Local_605.f_62[4 /*3*/] = 58;
			Local_605.f_62[4 /*3*/].f_2 = iVar0;
			Local_605.f_62[5 /*3*/].f_1 = 1;
			Local_605.f_62[5 /*3*/] = 54;
			Local_605.f_62[5 /*3*/].f_2 = iVar0;
			Local_605.f_62[6 /*3*/].f_1 = 1;
			Local_605.f_62[6 /*3*/] = 62;
			Local_605.f_62[6 /*3*/].f_2 = iVar0;
			break;
		
		case 1:
			Local_605.f_62[0 /*3*/].f_1 = 5;
			Local_605.f_62[0 /*3*/] = 32;
			Local_605.f_62[0 /*3*/].f_2 = iVar0;
			Local_605.f_62[1 /*3*/].f_1 = 1;
			Local_605.f_62[1 /*3*/] = 56;
			Local_605.f_62[1 /*3*/].f_2 = iVar0;
			Local_605.f_62[2 /*3*/].f_1 = 1;
			Local_605.f_62[2 /*3*/] = 60;
			Local_605.f_62[2 /*3*/].f_2 = iVar0;
			Local_605.f_62[3 /*3*/].f_1 = 5;
			Local_605.f_62[3 /*3*/] = 84;
			Local_605.f_62[3 /*3*/].f_2 = iVar0;
			Local_605.f_62[4 /*3*/].f_1 = 5;
			Local_605.f_62[4 /*3*/] = 58;
			Local_605.f_62[4 /*3*/].f_2 = iVar0;
			Local_605.f_62[5 /*3*/].f_1 = 0;
			Local_605.f_62[5 /*3*/] = 54;
			Local_605.f_62[5 /*3*/].f_2 = iVar0;
			Local_605.f_62[6 /*3*/].f_1 = 0;
			Local_605.f_62[6 /*3*/] = 62;
			Local_605.f_62[6 /*3*/].f_2 = iVar0;
			break;
		
		case 2:
			Local_605.f_62[0 /*3*/].f_1 = 3;
			Local_605.f_62[0 /*3*/] = 34;
			Local_605.f_62[0 /*3*/].f_2 = iVar0;
			Local_605.f_62[1 /*3*/].f_1 = 6;
			Local_605.f_62[1 /*3*/] = 30;
			Local_605.f_62[1 /*3*/].f_2 = iVar0;
			Local_605.f_62[2 /*3*/].f_1 = 6;
			Local_605.f_62[2 /*3*/] = 86;
			Local_605.f_62[2 /*3*/].f_2 = iVar0;
			Local_605.f_62[3 /*3*/].f_1 = 3;
			Local_605.f_62[3 /*3*/] = 82;
			Local_605.f_62[3 /*3*/].f_2 = iVar0;
			Local_605.f_62[4 /*3*/].f_1 = 2;
			Local_605.f_62[4 /*3*/] = 58;
			Local_605.f_62[4 /*3*/].f_2 = iVar0;
			Local_605.f_62[5 /*3*/].f_1 = 0;
			Local_605.f_62[5 /*3*/] = 54;
			Local_605.f_62[5 /*3*/].f_2 = iVar0;
			Local_605.f_62[6 /*3*/].f_1 = 0;
			Local_605.f_62[6 /*3*/] = 62;
			Local_605.f_62[6 /*3*/].f_2 = iVar0;
			break;
		
		case 3:
			Local_605.f_62[0 /*3*/].f_1 = 0;
			Local_605.f_62[0 /*3*/] = 30;
			Local_605.f_62[0 /*3*/].f_2 = iVar0;
			Local_605.f_62[1 /*3*/].f_1 = 0;
			Local_605.f_62[1 /*3*/] = 34;
			Local_605.f_62[1 /*3*/].f_2 = iVar0;
			Local_605.f_62[2 /*3*/].f_1 = 0;
			Local_605.f_62[2 /*3*/] = 86;
			Local_605.f_62[2 /*3*/].f_2 = iVar0;
			Local_605.f_62[3 /*3*/].f_1 = 0;
			Local_605.f_62[3 /*3*/] = 82;
			Local_605.f_62[3 /*3*/].f_2 = iVar0;
			Local_605.f_62[4 /*3*/].f_1 = 2;
			Local_605.f_62[4 /*3*/] = 58;
			Local_605.f_62[4 /*3*/].f_2 = iVar0;
			Local_605.f_62[5 /*3*/].f_1 = 7;
			Local_605.f_62[5 /*3*/] = 54;
			Local_605.f_62[5 /*3*/].f_2 = iVar0;
			Local_605.f_62[6 /*3*/].f_1 = 7;
			Local_605.f_62[6 /*3*/] = 62;
			Local_605.f_62[6 /*3*/].f_2 = iVar0;
			break;
		
		case 4:
			Local_605.f_62[0 /*3*/].f_1 = 6;
			Local_605.f_62[0 /*3*/] = 30;
			Local_605.f_62[0 /*3*/].f_2 = iVar0;
			Local_605.f_62[1 /*3*/].f_1 = 6;
			Local_605.f_62[1 /*3*/] = 34;
			Local_605.f_62[1 /*3*/].f_2 = iVar0;
			Local_605.f_62[2 /*3*/].f_1 = 6;
			Local_605.f_62[2 /*3*/] = 86;
			Local_605.f_62[2 /*3*/].f_2 = iVar0;
			Local_605.f_62[3 /*3*/].f_1 = 6;
			Local_605.f_62[3 /*3*/] = 82;
			Local_605.f_62[3 /*3*/].f_2 = iVar0;
			Local_605.f_62[4 /*3*/].f_1 = 0;
			Local_605.f_62[4 /*3*/] = 58;
			Local_605.f_62[4 /*3*/].f_2 = iVar0;
			Local_605.f_62[5 /*3*/].f_1 = 0;
			Local_605.f_62[5 /*3*/] = 54;
			Local_605.f_62[5 /*3*/].f_2 = iVar0;
			Local_605.f_62[6 /*3*/].f_1 = 0;
			Local_605.f_62[6 /*3*/] = 62;
			Local_605.f_62[6 /*3*/].f_2 = iVar0;
			break;
	}
}

void func_76()
{
	int iVar0;
	int iVar1;
	
	iVar0 = NETWORK::GET_NETWORK_TIME();
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
	switch (iVar1)
	{
		case 0:
			Local_605.f_62[0 /*3*/].f_1 = 3;
			Local_605.f_62[0 /*3*/] = 32;
			Local_605.f_62[0 /*3*/].f_2 = iVar0;
			Local_605.f_62[1 /*3*/].f_1 = 4;
			Local_605.f_62[1 /*3*/] = 56;
			Local_605.f_62[1 /*3*/].f_2 = iVar0;
			Local_605.f_62[2 /*3*/].f_1 = 4;
			Local_605.f_62[2 /*3*/] = 60;
			Local_605.f_62[2 /*3*/].f_2 = iVar0;
			Local_605.f_62[3 /*3*/].f_1 = 3;
			Local_605.f_62[3 /*3*/] = 84;
			Local_605.f_62[3 /*3*/].f_2 = iVar0;
			Local_605.f_62[4 /*3*/].f_1 = 2;
			Local_605.f_62[4 /*3*/] = 58;
			Local_605.f_62[4 /*3*/].f_2 = iVar0;
			Local_605.f_62[5 /*3*/].f_1 = 1;
			Local_605.f_62[5 /*3*/] = 54;
			Local_605.f_62[5 /*3*/].f_2 = iVar0;
			Local_605.f_62[6 /*3*/].f_1 = 1;
			Local_605.f_62[6 /*3*/] = 62;
			Local_605.f_62[6 /*3*/].f_2 = iVar0;
			break;
		
		case 1:
			Local_605.f_62[0 /*3*/].f_1 = 5;
			Local_605.f_62[0 /*3*/] = 32;
			Local_605.f_62[0 /*3*/].f_2 = iVar0;
			Local_605.f_62[1 /*3*/].f_1 = 7;
			Local_605.f_62[1 /*3*/] = 56;
			Local_605.f_62[1 /*3*/].f_2 = iVar0;
			Local_605.f_62[2 /*3*/].f_1 = 7;
			Local_605.f_62[2 /*3*/] = 60;
			Local_605.f_62[2 /*3*/].f_2 = iVar0;
			Local_605.f_62[3 /*3*/].f_1 = 5;
			Local_605.f_62[3 /*3*/] = 84;
			Local_605.f_62[3 /*3*/].f_2 = iVar0;
			Local_605.f_62[4 /*3*/].f_1 = 2;
			Local_605.f_62[4 /*3*/] = 58;
			Local_605.f_62[4 /*3*/].f_2 = iVar0;
			Local_605.f_62[5 /*3*/].f_1 = 0;
			Local_605.f_62[5 /*3*/] = 54;
			Local_605.f_62[5 /*3*/].f_2 = iVar0;
			Local_605.f_62[6 /*3*/].f_1 = 0;
			Local_605.f_62[6 /*3*/] = 62;
			Local_605.f_62[6 /*3*/].f_2 = iVar0;
			break;
		
		case 2:
			Local_605.f_62[0 /*3*/].f_1 = 3;
			Local_605.f_62[0 /*3*/] = 30;
			Local_605.f_62[0 /*3*/].f_2 = iVar0;
			Local_605.f_62[1 /*3*/].f_1 = 3;
			Local_605.f_62[1 /*3*/] = 34;
			Local_605.f_62[1 /*3*/].f_2 = iVar0;
			Local_605.f_62[2 /*3*/].f_1 = 3;
			Local_605.f_62[2 /*3*/] = 86;
			Local_605.f_62[2 /*3*/].f_2 = iVar0;
			Local_605.f_62[3 /*3*/].f_1 = 3;
			Local_605.f_62[3 /*3*/] = 82;
			Local_605.f_62[3 /*3*/].f_2 = iVar0;
			Local_605.f_62[4 /*3*/].f_1 = 6;
			Local_605.f_62[4 /*3*/] = 58;
			Local_605.f_62[4 /*3*/].f_2 = iVar0;
			Local_605.f_62[5 /*3*/].f_1 = 0;
			Local_605.f_62[5 /*3*/] = 54;
			Local_605.f_62[5 /*3*/].f_2 = iVar0;
			Local_605.f_62[6 /*3*/].f_1 = 0;
			Local_605.f_62[6 /*3*/] = 62;
			Local_605.f_62[6 /*3*/].f_2 = iVar0;
			break;
		
		case 3:
			Local_605.f_62[0 /*3*/].f_1 = 1;
			Local_605.f_62[0 /*3*/] = 30;
			Local_605.f_62[0 /*3*/].f_2 = iVar0;
			Local_605.f_62[1 /*3*/].f_1 = 1;
			Local_605.f_62[1 /*3*/] = 34;
			Local_605.f_62[1 /*3*/].f_2 = iVar0;
			Local_605.f_62[2 /*3*/].f_1 = 1;
			Local_605.f_62[2 /*3*/] = 86;
			Local_605.f_62[2 /*3*/].f_2 = iVar0;
			Local_605.f_62[3 /*3*/].f_1 = 1;
			Local_605.f_62[3 /*3*/] = 82;
			Local_605.f_62[3 /*3*/].f_2 = iVar0;
			Local_605.f_62[4 /*3*/].f_1 = 2;
			Local_605.f_62[4 /*3*/] = 58;
			Local_605.f_62[4 /*3*/].f_2 = iVar0;
			Local_605.f_62[5 /*3*/].f_1 = 0;
			Local_605.f_62[5 /*3*/] = 54;
			Local_605.f_62[5 /*3*/].f_2 = iVar0;
			Local_605.f_62[6 /*3*/].f_1 = 0;
			Local_605.f_62[6 /*3*/] = 62;
			Local_605.f_62[6 /*3*/].f_2 = iVar0;
			break;
		
		case 4:
			Local_605.f_62[0 /*3*/].f_1 = 0;
			Local_605.f_62[0 /*3*/] = 30;
			Local_605.f_62[0 /*3*/].f_2 = iVar0;
			Local_605.f_62[1 /*3*/].f_1 = 0;
			Local_605.f_62[1 /*3*/] = 34;
			Local_605.f_62[1 /*3*/].f_2 = iVar0;
			Local_605.f_62[2 /*3*/].f_1 = 0;
			Local_605.f_62[2 /*3*/] = 86;
			Local_605.f_62[2 /*3*/].f_2 = iVar0;
			Local_605.f_62[3 /*3*/].f_1 = 0;
			Local_605.f_62[3 /*3*/] = 82;
			Local_605.f_62[3 /*3*/].f_2 = iVar0;
			Local_605.f_62[4 /*3*/].f_1 = 6;
			Local_605.f_62[4 /*3*/] = 58;
			Local_605.f_62[4 /*3*/].f_2 = iVar0;
			Local_605.f_62[5 /*3*/].f_1 = 6;
			Local_605.f_62[5 /*3*/] = 54;
			Local_605.f_62[5 /*3*/].f_2 = iVar0;
			Local_605.f_62[6 /*3*/].f_1 = 6;
			Local_605.f_62[6 /*3*/] = 62;
			Local_605.f_62[6 /*3*/].f_2 = iVar0;
			break;
	}
}

void func_77()
{
	int iVar0;
	int iVar1;
	
	iVar0 = NETWORK::GET_NETWORK_TIME();
	Local_605.f_62[0 /*3*/].f_1 = 3;
	Local_605.f_62[0 /*3*/] = 32;
	Local_605.f_62[0 /*3*/].f_2 = iVar0;
	Local_605.f_62[1 /*3*/].f_1 = 3;
	Local_605.f_62[1 /*3*/] = 56;
	Local_605.f_62[1 /*3*/].f_2 = iVar0;
	Local_605.f_62[2 /*3*/].f_1 = 3;
	Local_605.f_62[2 /*3*/] = 60;
	Local_605.f_62[2 /*3*/].f_2 = iVar0;
	Local_605.f_62[3 /*3*/].f_1 = 3;
	Local_605.f_62[3 /*3*/] = 84;
	Local_605.f_62[3 /*3*/].f_2 = iVar0;
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	switch (iVar1)
	{
		case 0:
			Local_605.f_62[4 /*3*/].f_1 = 2;
			Local_605.f_62[4 /*3*/] = 58;
			Local_605.f_62[4 /*3*/].f_2 = iVar0;
			break;
		
		case 1:
			Local_605.f_62[4 /*3*/].f_1 = MISC::GET_RANDOM_INT_IN_RANGE(4, 6);
			Local_605.f_62[4 /*3*/] = 58;
			Local_605.f_62[4 /*3*/].f_2 = iVar0;
			break;
		
		case 2:
			Local_605.f_62[4 /*3*/].f_1 = 1;
			Local_605.f_62[4 /*3*/] = 54;
			Local_605.f_62[4 /*3*/].f_2 = iVar0;
			Local_605.f_62[5 /*3*/].f_1 = 1;
			Local_605.f_62[5 /*3*/] = 58;
			Local_605.f_62[5 /*3*/].f_2 = iVar0;
			Local_605.f_62[6 /*3*/].f_1 = 1;
			Local_605.f_62[6 /*3*/] = 62;
			Local_605.f_62[6 /*3*/].f_2 = iVar0;
			break;
		
		case 3:
			break;
	}
}

void func_78()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		Local_605.f_62[iVar0 /*3*/] = -1;
		Local_605.f_62[iVar0 /*3*/].f_1 = -1;
		Local_605.f_62[iVar0 /*3*/].f_2 = -2147483647;
		iVar0++;
	}
	iVar1 = NETWORK::GET_NETWORK_TIME();
	Local_605.f_62[0 /*3*/] = 54;
	Local_605.f_62[0 /*3*/].f_2 = iVar1;
	Local_605.f_62[1 /*3*/] = 56;
	Local_605.f_62[1 /*3*/].f_2 = iVar1;
	Local_605.f_62[2 /*3*/] = 58;
	Local_605.f_62[2 /*3*/].f_2 = iVar1;
	Local_605.f_62[3 /*3*/] = 60;
	Local_605.f_62[3 /*3*/].f_2 = iVar1;
	Local_605.f_62[4 /*3*/] = 62;
	Local_605.f_62[4 /*3*/].f_2 = iVar1;
	iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
	switch (iVar2)
	{
		case 0:
			Local_605.f_62[0 /*3*/].f_1 = 3;
			Local_605.f_62[1 /*3*/].f_1 = 3;
			Local_605.f_62[3 /*3*/].f_1 = 3;
			Local_605.f_62[4 /*3*/].f_1 = 3;
			break;
		
		case 1:
			Local_605.f_62[0 /*3*/].f_1 = 4;
			Local_605.f_62[1 /*3*/].f_1 = 4;
			Local_605.f_62[3 /*3*/].f_1 = 4;
			Local_605.f_62[4 /*3*/].f_1 = 4;
			break;
		
		case 2:
			Local_605.f_62[0 /*3*/].f_1 = 5;
			Local_605.f_62[1 /*3*/].f_1 = 5;
			Local_605.f_62[3 /*3*/].f_1 = 5;
			Local_605.f_62[4 /*3*/].f_1 = 5;
			break;
		
		case 3:
			Local_605.f_62[0 /*3*/].f_1 = 7;
			Local_605.f_62[1 /*3*/].f_1 = 7;
			Local_605.f_62[3 /*3*/].f_1 = 7;
			Local_605.f_62[4 /*3*/].f_1 = 7;
			break;
		
		case 4:
			Local_605.f_62[0 /*3*/].f_1 = 6;
			Local_605.f_62[1 /*3*/].f_1 = 6;
			Local_605.f_62[3 /*3*/].f_1 = 6;
			Local_605.f_62[4 /*3*/].f_1 = 6;
			break;
	}
	iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	switch (iVar2)
	{
		case 0:
			Local_605.f_62[2 /*3*/].f_1 = -1;
			Local_605.f_62[2 /*3*/] = -1;
			Local_605.f_62[2 /*3*/].f_2 = -2147483647;
			break;
		
		case 1:
			Local_605.f_62[2 /*3*/].f_1 = 2;
			break;
		
		case 2:
			Local_605.f_62[2 /*3*/].f_1 = 0;
			break;
		
		case 3:
			Local_605.f_62[2 /*3*/].f_1 = 1;
			break;
	}
}

void func_79()
{
	var uVar0[4];
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (!Local_152.f_178.f_1)
	{
		return;
	}
	iVar5 = 0;
	while (iVar5 <= 5)
	{
		iVar6 = 0;
		while (iVar6 <= 3)
		{
			iVar7 = func_80(iVar5, iVar6);
			if (Local_605[iVar5 /*5*/][iVar6] != iVar7)
			{
				Local_605[iVar5 /*5*/][iVar6] = iVar7;
			}
			if (iVar7 != -1)
			{
				uVar0[iVar7]++;
			}
			iVar6++;
		}
		iVar5++;
	}
	iVar5 = 0;
	while (iVar5 <= 3)
	{
		if (iLocal_806[iVar5] != uVar0[iVar5])
		{
			iLocal_806[iVar5] = uVar0[iVar5];
		}
		iVar5++;
	}
}

int func_80(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_84(iParam0, iParam1);
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)) && !Local_913[iVar1 /*37*/].f_25)
		{
		}
		else if (Local_811[iVar1 /*9*/].f_6 == -1)
		{
		}
		else if (!func_81(&(Local_605.f_85[Local_811[iVar1 /*9*/].f_6 /*11*/][1 /*5*/]), ((iVar0 - 13) - 1)))
		{
		}
		else if (!func_81(&(Local_605.f_85[Local_811[iVar1 /*9*/].f_6 /*11*/][1 /*5*/]), (iVar0 - 13)))
		{
		}
		else if (!func_81(&(Local_605.f_85[Local_811[iVar1 /*9*/].f_6 /*11*/][0 /*5*/]), ((iVar0 - 13) - 1)))
		{
		}
		else if (!func_81(&(Local_605.f_85[Local_811[iVar1 /*9*/].f_6 /*11*/][0 /*5*/]), (iVar0 - 13) + 1))
		{
		}
		else if (!func_81(&(Local_605.f_85[Local_811[iVar1 /*9*/].f_6 /*11*/][0 /*5*/]), (iVar0 - 1)))
		{
		}
		else if (!func_81(&(Local_605.f_85[Local_811[iVar1 /*9*/].f_6 /*11*/][0 /*5*/]), iVar0 + 1))
		{
		}
		else if (!func_81(&(Local_605.f_85[Local_811[iVar1 /*9*/].f_6 /*11*/][1 /*5*/]), (iVar0 + 13 - 1)))
		{
		}
		else if (!func_81(&(Local_605.f_85[Local_811[iVar1 /*9*/].f_6 /*11*/][1 /*5*/]), iVar0 + 13))
		{
		}
		else
		{
			return Local_811[iVar1 /*9*/].f_6;
		}
		iVar1++;
	}
	return -1;
}

bool func_81(var uParam0, int iParam1)
{
	return BitTest((*uParam0)[func_83(iParam1)], func_82(iParam1));
}

int func_82(int iParam0)
{
	if (iParam0 < 31)
	{
		return iParam0;
	}
	else if (iParam0 < 62)
	{
		return (iParam0 - 31);
	}
	return (iParam0 - func_83(iParam0) * 31);
}

int func_83(int iParam0)
{
	if (iParam0 < 31)
	{
		return 0;
	}
	else if (iParam0 < 62)
	{
		return 1;
	}
	return (iParam0 / 31);
}

int func_84(int iParam0, int iParam1)
{
	return func_71((1 + iParam0 * 2), (1 + iParam1 * 2));
}

void func_85()
{
	if (NETWORK::GET_NETWORK_TIME() < Local_605.f_146)
	{
		return;
	}
	Local_605.f_84 = Local_605.f_146;
	Local_605.f_161 = Local_605.f_146;
	func_74(1, 0);
	func_63(4);
}

void func_86()
{
	func_87();
	func_63(3);
}

void func_87()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Local_152.f_178.f_1)
	{
		return;
	}
	Local_605.f_162 = 0;
	Local_605.f_163 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Local_605[iVar0 /*5*/][iVar1] = -1;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iLocal_806[iVar0] = 0;
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			iVar2 = 0;
			while (iVar2 <= 3)
			{
				Local_605.f_85[iVar0 /*11*/][iVar1 /*5*/][iVar2] = 0;
				iVar2++;
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Local_152.f_149[iVar0] == -1)
		{
		}
		else
		{
			func_88(iVar0, func_91(iVar0), func_90(iVar0), 1);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		Local_605.f_62[iVar0 /*3*/] = -1;
		Local_605.f_62[iVar0 /*3*/].f_1 = -1;
		Local_605.f_62[iVar0 /*3*/].f_2 = -2147483647;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Local_605.f_148[iVar0 /*4*/] = -2147483647;
		Local_605.f_148[iVar0 /*4*/].f_1 = -1;
		Local_605.f_148[iVar0 /*4*/].f_2 = -1;
		Local_605.f_148[iVar0 /*4*/].f_3 = -1;
		iVar0++;
	}
	Local_605.f_146 = SYSTEM::CEIL((SYSTEM::TO_FLOAT(NETWORK::GET_NETWORK_TIME() + 5000) / 1000f)) * 1000;
	func_79();
}

void func_88(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_84(iParam1, iParam2);
	if (!(iParam3 && iParam0 == 3))
	{
		func_89(&(Local_605.f_85[iParam0 /*11*/][1 /*5*/]), ((iVar0 - 13) - 1));
	}
	if (!(iParam3 && iParam0 == 2))
	{
		func_89(&(Local_605.f_85[iParam0 /*11*/][1 /*5*/]), (iVar0 - 13));
	}
	func_89(&(Local_605.f_85[iParam0 /*11*/][0 /*5*/]), ((iVar0 - 13) - 1));
	func_89(&(Local_605.f_85[iParam0 /*11*/][0 /*5*/]), (iVar0 - 13) + 1);
	func_89(&(Local_605.f_85[iParam0 /*11*/][0 /*5*/]), (iVar0 - 1));
	func_89(&(Local_605.f_85[iParam0 /*11*/][0 /*5*/]), iVar0 + 1);
	if (!(iParam3 && iParam0 == 1))
	{
		func_89(&(Local_605.f_85[iParam0 /*11*/][1 /*5*/]), (iVar0 + 13 - 1));
	}
	if (!(iParam3 && iParam0 == 0))
	{
		func_89(&(Local_605.f_85[iParam0 /*11*/][1 /*5*/]), iVar0 + 13);
	}
	Local_605[iParam1 /*5*/][iParam2] = iParam0;
}

void func_89(var uParam0, int iParam1)
{
	MISC::SET_BIT(uParam0[func_83(iParam1)], func_82(iParam1));
}

int func_90(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 0;
		
		case 2:
			return 3;
		
		case 3:
			return 3;
		
		default:
	}
	return -1;
}

int func_91(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 5;
		
		case 2:
			return 0;
		
		case 3:
			return 5;
		
		default:
	}
	return -1;
}

void func_92()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	bVar2 = true;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && !Local_913[iVar0 /*37*/].f_25)
		{
		}
		else
		{
			if (Local_811[iVar0 /*9*/].f_6 == -1)
			{
				bVar2 = false;
			}
			else if (Local_811[iVar0 /*9*/] == 0)
			{
				bVar2 = false;
			}
			else
			{
				iVar1++;
				iVar0++;
			}
			if (!bVar2)
			{
				if (func_97(&(Local_152.f_314)))
				{
					func_96(&(Local_152.f_314));
				}
				return;
			}
			if (iVar1 <= 1)
			{
				if (func_97(&(Local_152.f_314)))
				{
					func_96(&(Local_152.f_314));
				}
				return;
			}
			if (!func_97(&(Local_152.f_314)))
			{
				func_95(&(Local_152.f_314), 0, 0);
				return;
			}
			else if (!func_93(&(Local_152.f_314), 1500, 0))
			{
				return;
			}
			Local_605.f_138 = iVar1 + 1;
			func_63(2);
		}

int func_93(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_94(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_94(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
		}
		else
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

void func_95(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
	}
	else
	{
		*uParam0 = MISC::GET_GAME_TIMER();
	}
	uParam0->f_1 = 1;
}

void func_96(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_97(var uParam0)
{
	return uParam0->f_1;
}

void func_98()
{
	func_99();
	func_63(1);
}

void func_99()
{
	int iVar0;
	int iVar1;
	int iVar2[24];
	int iVar27;
	int iVar28;
	
	if (!Local_152.f_178.f_1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 23)
	{
		iVar2[iVar0] = iVar0;
		iVar0++;
	}
	MISC::SET_RANDOM_SEED(NETWORK::GET_NETWORK_TIME());
	iVar0 = 0;
	while (iVar0 <= 23)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 24);
		iVar27 = iVar2[iVar0];
		iVar2[iVar0] = iVar2[iVar1];
		iVar2[iVar1] = iVar27;
		iVar0++;
	}
	iVar28 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Local_605.f_31[iVar0 /*5*/][iVar1] = iVar2[iVar28];
			iVar28++;
			iVar1++;
		}
		iVar0++;
	}
}

void func_100()
{
	switch (Local_152.f_140)
	{
		case 0:
			func_337();
			break;
		
		case 1:
			func_334();
			break;
		
		case 2:
			func_333();
			break;
		
		case 3:
			func_328();
			break;
		
		case 4:
			func_327();
			break;
		
		case 5:
			func_321();
			break;
		
		case 6:
			func_319();
			break;
		
		case 7:
			func_194();
			break;
		
		case 8:
			func_150();
			break;
		
		case 9:
			func_129();
			break;
		
		case 10:
			func_101();
			break;
		
		case 11:
			func_11();
			break;
		
		case 12:
			break;
	}
}

void func_101()
{
	func_125();
	func_102();
}

void func_102()
{
	var uVar0[4];
	float fVar5;
	int iVar6;
	int iVar7;
	
	func_124();
	func_123("MPArcadeCabinetGridHUD", "lbd", 0.5f, 0.5f, 0.6604167f, 0.9481481f, 0f, Local_152.f_107.f_17);
	HUD::SET_TEXT_SCALE(1f, 1f);
	HUD::SET_TEXT_COLOUR(0, 0, 0, 255);
	HUD::SET_TEXT_CENTRE(true);
	HUD::SET_TEXT_FONT(7);
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("SCGW_LBD_T");
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_122((0.5f + 0.001041667f)), (0.15f + 0.003703704f), 0);
	HUD::SET_TEXT_SCALE(1f, 1f);
	HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
	HUD::SET_TEXT_CENTRE(true);
	HUD::SET_TEXT_FONT(7);
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("SCGW_LBD_T");
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_122(0.5f), 0.15f, 0);
	fVar5 = 0.22f;
	iVar6 = 0;
	iVar6 = 0;
	while (iVar6 <= 9)
	{
		func_119(Local_605.f_165[iVar6 /*3*/], &uVar0);
		iVar7 = 255;
		if (Local_605.f_165[iVar6 /*3*/].f_2 == Local_152.f_178)
		{
			iVar7 = SYSTEM::ROUND(MISC::ABSF((SYSTEM::SIN((SYSTEM::TO_FLOAT(NETWORK::GET_NETWORK_TIME()) * 0.5f)) * 80f))) + 175;
		}
		HUD::SET_TEXT_SCALE(1f, 1f);
		HUD::SET_TEXT_COLOUR(0, 0, 0, iVar7);
		HUD::SET_TEXT_RIGHT_JUSTIFY(true);
		HUD::SET_TEXT_WRAP(func_122(0f), func_122((0.37f + 0.001041667f)));
		HUD::SET_TEXT_FONT(7);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(func_118(iVar6));
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_122(0.5f), (fVar5 + 0.003703704f), 0);
		HUD::SET_TEXT_SCALE(1f, 1f);
		HUD::SET_TEXT_COLOUR(Local_152.f_107[uVar0[3] /*4*/], Local_152.f_107[uVar0[3] /*4*/].f_1, Local_152.f_107[uVar0[3] /*4*/].f_2, iVar7);
		HUD::SET_TEXT_RIGHT_JUSTIFY(true);
		HUD::SET_TEXT_WRAP(func_122(0f), func_122(0.37f));
		HUD::SET_TEXT_FONT(7);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(func_118(iVar6));
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_122(0.5f), fVar5, 0);
		HUD::SET_TEXT_SCALE(1f, 1f);
		HUD::SET_TEXT_COLOUR(0, 0, 0, iVar7);
		HUD::SET_TEXT_RIGHT_JUSTIFY(true);
		HUD::SET_TEXT_WRAP(func_122(0f), func_122((0.4135417f + 0.001041667f)));
		HUD::SET_TEXT_FONT(7);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_117(uVar0[0]));
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_122(0.5f), (fVar5 + 0.003703704f), 0);
		HUD::SET_TEXT_SCALE(1f, 1f);
		HUD::SET_TEXT_COLOUR(Local_152.f_107[uVar0[3] /*4*/], Local_152.f_107[uVar0[3] /*4*/].f_1, Local_152.f_107[uVar0[3] /*4*/].f_2, iVar7);
		HUD::SET_TEXT_RIGHT_JUSTIFY(true);
		HUD::SET_TEXT_WRAP(func_122(0f), func_122(0.4135417f));
		HUD::SET_TEXT_FONT(7);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_117(uVar0[0]));
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_122(0.5f), fVar5, 0);
		HUD::SET_TEXT_SCALE(1f, 1f);
		HUD::SET_TEXT_COLOUR(0, 0, 0, iVar7);
		HUD::SET_TEXT_RIGHT_JUSTIFY(true);
		HUD::SET_TEXT_WRAP(func_122(0f), func_122((0.4411458f + 0.001041667f)));
		HUD::SET_TEXT_FONT(7);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_117(uVar0[1]));
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_122(0.5f), (fVar5 + 0.003703704f), 0);
		HUD::SET_TEXT_SCALE(1f, 1f);
		HUD::SET_TEXT_COLOUR(Local_152.f_107[uVar0[3] /*4*/], Local_152.f_107[uVar0[3] /*4*/].f_1, Local_152.f_107[uVar0[3] /*4*/].f_2, iVar7);
		HUD::SET_TEXT_RIGHT_JUSTIFY(true);
		HUD::SET_TEXT_WRAP(func_122(0f), func_122(0.4411458f));
		HUD::SET_TEXT_FONT(7);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_117(uVar0[1]));
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_122(0.5f), fVar5, 0);
		HUD::SET_TEXT_SCALE(1f, 1f);
		HUD::SET_TEXT_COLOUR(0, 0, 0, iVar7);
		HUD::SET_TEXT_RIGHT_JUSTIFY(true);
		HUD::SET_TEXT_WRAP(func_122(0f), func_122((0.46875f + 0.001041667f)));
		HUD::SET_TEXT_FONT(7);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_117(uVar0[2]));
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_122(0.5f), (fVar5 + 0.003703704f), 0);
		HUD::SET_TEXT_SCALE(1f, 1f);
		HUD::SET_TEXT_COLOUR(Local_152.f_107[uVar0[3] /*4*/], Local_152.f_107[uVar0[3] /*4*/].f_1, Local_152.f_107[uVar0[3] /*4*/].f_2, iVar7);
		HUD::SET_TEXT_RIGHT_JUSTIFY(true);
		HUD::SET_TEXT_WRAP(func_122(0f), func_122(0.46875f));
		HUD::SET_TEXT_FONT(7);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_117(uVar0[2]));
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_122(0.5f), fVar5, 0);
		HUD::SET_TEXT_SCALE(1f, 1f);
		HUD::SET_TEXT_COLOUR(0, 0, 0, iVar7);
		HUD::SET_TEXT_RIGHT_JUSTIFY(true);
		HUD::SET_TEXT_WRAP(func_122(0f), func_122((0.695f + 0.001041667f)));
		HUD::SET_TEXT_FONT(7);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("SCGW_PTS");
		HUD::ADD_TEXT_COMPONENT_INTEGER(Local_605.f_165[iVar6 /*3*/].f_1);
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_122(0.5f), (fVar5 + 0.003703704f), 0);
		HUD::SET_TEXT_SCALE(1f, 1f);
		HUD::SET_TEXT_COLOUR(Local_152.f_107[uVar0[3] /*4*/], Local_152.f_107[uVar0[3] /*4*/].f_1, Local_152.f_107[uVar0[3] /*4*/].f_2, iVar7);
		HUD::SET_TEXT_RIGHT_JUSTIFY(true);
		HUD::SET_TEXT_WRAP(func_122(0f), func_122(0.695f));
		HUD::SET_TEXT_FONT(7);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("SCGW_PTS");
		HUD::ADD_TEXT_COMPONENT_INTEGER(Local_605.f_165[iVar6 /*3*/].f_1);
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_122(0.5f), fVar5, 0);
		fVar5 = (fVar5 + 0.06f);
		iVar6++;
	}
	func_104();
	func_103();
}

void func_103()
{
	func_123("MPArcadeCabinetGridTiles", "facade", 0.5f, 0.5f, 1f, 1f, 0f, Local_152.f_107.f_17);
}

void func_104()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_105(iVar0);
		iVar0++;
	}
}

void func_105(int iParam0)
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	struct<4> Var6;
	float fVar10;
	
	if (!Local_1062[iParam0 /*17*/])
	{
		return;
	}
	Var0 = { func_116() };
	Var6.f_3 = 255;
	if (Local_1062[iParam0 /*17*/].f_3)
	{
		Var0.f_0 = -Var0.f_0;
	}
	Var2 = { func_115() };
	if (!Local_1062[iParam0 /*17*/].f_2)
	{
		if (Local_1062[iParam0 /*17*/].f_4 > 0)
		{
			Var2.f_1 = (Var2.f_1 - ((Var0.f_1 * (IntToFloat(Local_1062[iParam0 /*17*/].f_4) % (IntToFloat(Local_1062[iParam0 /*17*/].f_6) * 1f))) / (IntToFloat(Local_1062[iParam0 /*17*/].f_6) * 1f)));
			Var4 = { Var2 };
			Var4.f_1 = (Var4.f_1 + Var0.f_1);
		}
		else if (Local_1062[iParam0 /*17*/].f_7 > 0)
		{
			Local_1062[iParam0 /*17*/].f_4 = MISC::GET_RANDOM_INT_IN_RANGE(0, Local_1062[iParam0 /*17*/].f_7);
			Local_1062[iParam0 /*17*/].f_2 = 1;
		}
	}
	else if (Local_1062[iParam0 /*17*/].f_4 > 0)
	{
	}
	else
	{
		Local_1062[iParam0 /*17*/].f_4 = Local_1062[iParam0 /*17*/].f_6;
		Local_1062[iParam0 /*17*/].f_2 = 0;
	}
	if (Local_1062[iParam0 /*17*/].f_1)
	{
		fVar10 = (SYSTEM::TO_FLOAT(Local_1062[iParam0 /*17*/].f_5) / SYSTEM::TO_FLOAT(Local_1062[iParam0 /*17*/].f_8));
		Var6.f_0 = func_114(Local_1062[iParam0 /*17*/].f_9, Local_1062[iParam0 /*17*/].f_13, fVar10);
		Var6.f_1 = func_114(Local_1062[iParam0 /*17*/].f_9.f_1, Local_1062[iParam0 /*17*/].f_13.f_1, fVar10);
		Var6.f_2 = func_114(Local_1062[iParam0 /*17*/].f_9.f_2, Local_1062[iParam0 /*17*/].f_13.f_2, fVar10);
		Var6.f_3 = func_114(Local_1062[iParam0 /*17*/].f_9.f_3, Local_1062[iParam0 /*17*/].f_13.f_3, fVar10);
	}
	else
	{
		Var6 = { Local_1062[iParam0 /*17*/].f_9 };
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(func_113(iParam0)))
	{
		func_110(Var2, Var0, Var6);
	}
	else
	{
		func_106(func_109(iParam0), func_113(iParam0), Var2, Var0, 0f, Var6);
	}
	if (!Local_1062[iParam0 /*17*/].f_2 && Local_1062[iParam0 /*17*/].f_4 > 0)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(func_113(0)))
		{
			func_110(Var4, Var0, Var6);
		}
		else
		{
			func_106(func_109(iParam0), func_113(iParam0), Var4, Var0, 0f, Var6);
		}
	}
	Local_1062[iParam0 /*17*/].f_5 = (Local_1062[iParam0 /*17*/].f_5 - SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f)));
	if (Local_1062[iParam0 /*17*/].f_5 < 0)
	{
		Local_1062[iParam0 /*17*/].f_5 = (Local_1062[iParam0 /*17*/].f_5 + Local_1062[iParam0 /*17*/].f_8);
	}
	Local_1062[iParam0 /*17*/].f_4 = (Local_1062[iParam0 /*17*/].f_4 - SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f)));
	if (Local_1062[iParam0 /*17*/].f_4 < 0)
	{
		Local_1062[iParam0 /*17*/].f_4 = 0;
	}
}

void func_106(char* sParam0, char* sParam1, struct<2> Param2, struct<2> Param4, float fParam6, struct<4> Param7)
{
	Param2 = { func_107(Param2) };
	Param4 = { func_107(Param4) };
	func_123(sParam0, sParam1, Param2.f_0, Param2.f_1, Param4.f_0, Param4.f_1, fParam6, Param7);
}

struct<2> func_107(struct<2> Param0)
{
	return func_108((Param0.f_0 * (1f / 1920f)), (Param0.f_1 * (1f / 1080f)));
}

struct<2> func_108(float fParam0, float fParam1)
{
	struct<2> Var0;
	
	Var0.f_0 = fParam0;
	Var0.f_1 = fParam1;
	return Var0;
}

char* func_109(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MPArcadeGamesFX05";
			break;
		
		case 1:
			return "MPArcadeGamesFX05";
			break;
		
		case 2:
			return "";
			break;
		
		case 3:
			return "MPArcadeGamesFX03";
			break;
		
		case 4:
			return "MPArcadeGamesFX04";
			break;
		
		case 5:
			return "MPArcadeGamesFX00";
			break;
		
		case 6:
			return "MPArcadeGamesFX02";
			break;
		
		case 7:
			return "MPArcadeGamesFX01";
			break;
	}
	return "";
}

void func_110(struct<2> Param0, struct<2> Param2, struct<4> Param4)
{
	Param0 = { func_107(Param0) };
	Param2 = { func_107(Param2) };
	func_111(Param0, Param2, Param4);
}

void func_111(struct<2> Param0, struct<2> Param2, struct<4> Param4)
{
	Param0 = { func_112(Param0) };
	Param2.f_0 = (Param2.f_0 * fLocal_127);
	GRAPHICS::DRAW_RECT(Param0.f_0, Param0.f_1, Param2.f_0, Param2.f_1, Param4.f_0, Param4.f_1, Param4.f_2, Param4.f_3, false);
}

struct<2> func_112(struct<2> Param0)
{
	Param0.f_0 = func_122(Param0.f_0);
	return Param0;
}

char* func_113(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "TV_LINE_OVERLAY_DEGENATRON";
			break;
		
		case 1:
			return "SCREEN_GRAD_100_50";
			break;
		
		case 2:
			return "";
			break;
		
		case 3:
			return "Screen_Overlay_2";
			break;
		
		case 4:
			return "Screen_Overlay_4";
			break;
		
		case 5:
			return "Screen_Overlay_8";
			break;
		
		case 6:
			return "Grid_1";
			break;
		
		case 7:
			return "FlatScreen1";
			break;
	}
	return "";
}

int func_114(int iParam0, int iParam1, float fParam2)
{
	return SYSTEM::ROUND((((1f - fParam2) * IntToFloat(iParam0)) + (fParam2 * IntToFloat(iParam1))));
}

struct<2> func_115()
{
	return func_108((1920f / 2f), (1080f / 2f));
}

struct<2> func_116()
{
	return func_108(1920f, 1080f);
}

char* func_117(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "A";
		
		case 1:
			return "B";
		
		case 2:
			return "C";
		
		case 3:
			return "D";
		
		case 4:
			return "E";
		
		case 5:
			return "F";
		
		case 6:
			return "G";
		
		case 7:
			return "H";
		
		case 8:
			return "I";
		
		case 9:
			return "J";
		
		case 10:
			return "K";
		
		case 11:
			return "L";
		
		case 12:
			return "M";
		
		case 13:
			return "N";
		
		case 14:
			return "O";
		
		case 15:
			return "P";
		
		case 16:
			return "Q";
		
		case 17:
			return "R";
		
		case 18:
			return "S";
		
		case 19:
			return "T";
		
		case 20:
			return "U";
		
		case 21:
			return "V";
		
		case 22:
			return "W";
		
		case 23:
			return "X";
		
		case 24:
			return "Y";
		
		case 25:
			return "Z";
		
		case 26:
			return "0";
		
		case 27:
			return "1";
		
		case 28:
			return "2";
		
		case 29:
			return "3";
		
		case 30:
			return "4";
		
		case 31:
			return "5";
		
		case 32:
			return "6";
		
		case 33:
			return "7";
		
		case 34:
			return "8";
		
		case 35:
			return "9";
		
		default:
	}
	return "";
}

char* func_118(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SCGW_1ST";
		
		case 1:
			return "SCGW_2ND";
		
		case 2:
			return "SCGW_3RD";
		
		case 3:
			return "SCGW_4TH";
		
		case 4:
			return "SCGW_5TH";
		
		case 5:
			return "SCGW_6TH";
		
		case 6:
			return "SCGW_7TH";
		
		case 7:
			return "SCGW_8TH";
		
		case 8:
			return "SCGW_9TH";
		
		case 9:
			return "SCGW_10TH";
		
		default:
	}
	return "SCGW_URD";
}

void func_119(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		(*uParam1)[iVar0] = func_120(iParam0, iVar0, 6);
		iVar0++;
	}
}

var func_120(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_121(iParam2, 0);
	return (SYSTEM::SHIFT_RIGHT(iParam0, (iParam1 * iParam2)) && uVar0);
}

var func_121(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= (iParam0 - 1))
	{
		MISC::SET_BIT(&uVar0, (iParam1 + iVar1));
		iVar1++;
	}
	return uVar0;
}

float func_122(float fParam0)
{
	fParam0 = (((fParam0 * 1920f) - ((1920f - 1080f) / 2f)) / 1080f);
	fParam0 = (0.5f - ((0.5f - fParam0) / fLocal_126));
	return fParam0;
}

void func_123(char* sParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, struct<4> Param7)
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	iVar0 = SYSTEM::ROUND((fParam3 * IntToFloat(iLocal_129)));
	fParam3 = (SYSTEM::TO_FLOAT(iVar0) * (1f / IntToFloat(iLocal_129)));
	iVar0 = SYSTEM::ROUND(((fParam5 * IntToFloat(iLocal_129)) / 4f)) * 4;
	fParam5 = (SYSTEM::TO_FLOAT(iVar0) * (1f / IntToFloat(iLocal_129)));
	GRAPHICS::_0x2D3B147AFAD49DE0(sParam0, sParam1, func_122(fParam2), fParam3, (fParam4 * fLocal_127), fParam5, fParam6, Param7.f_0, Param7.f_1, Param7.f_2, Param7.f_3, 0, 1);
}

void func_124()
{
	func_111(func_108(0.5f, 0.5f), func_108(1f, 1f), Local_152.f_107.f_25);
}

void func_125()
{
	struct<2> Var0;
	
	MISC::SET_BIT(&(Local_152.f_417), false);
	StringCopy(&Var0, "SC_H_LBD_3", 16);
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		StringConCat(&Var0, "PC", 16);
	}
	if (func_128(&Var0))
	{
		return;
	}
	func_16();
	func_126(&Var0);
}

void func_126(char* sParam0)
{
	Local_152.f_442 = MISC::GET_HASH_KEY(sParam0);
	func_127(sParam0);
}

void func_127(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
}

int func_128(char* sParam0)
{
	if (Local_152.f_442 == MISC::GET_HASH_KEY(sParam0))
	{
		return 1;
	}
	return 0;
}

void func_129()
{
	int iVar0[4];
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	char cVar9[0];
	int iVar10;
	
	if (!func_147())
	{
		func_11();
	}
	func_137();
	func_136();
	if (SOCIALCLUB::SC_PROFANITY_GET_CHECK_IS_VALID(Local_152.f_436))
	{
		if (SOCIALCLUB::SC_PROFANITY_GET_CHECK_IS_PENDING(Local_152.f_436))
		{
			return;
		}
		if (SOCIALCLUB::SC_PROFANITY_GET_STRING_PASSED(Local_152.f_436))
		{
			func_134();
			func_15(10);
			func_133("Frontend_Change_Screen");
			Local_152.f_436 = 0;
		}
		else
		{
			func_133("Frontend_Change_Letter");
			Local_152.f_432 = 0;
			func_119(0, &iVar0);
			iVar0[3] = Local_811[Local_152.f_178 /*9*/].f_6;
			Local_811[Local_152.f_178 /*9*/].f_7 = func_131(&iVar0);
			Local_152.f_436 = 0;
		}
		return;
	}
	iVar5 = 227;
	iVar6 = 226;
	iVar7 = 191;
	iVar8 = 194;
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		iVar7 = 237;
		iVar8 = 238;
		iVar5 = 188;
		iVar6 = 187;
	}
	if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, iVar7))
	{
		Local_152.f_432++;
		if (Local_152.f_432 == 3)
		{
			func_119(Local_811[Local_152.f_178 /*9*/].f_7, &iVar0);
			StringCopy(&cVar9, func_117(iVar0[0]), 4);
			StringConCat(&cVar9, func_117(iVar0[1]), 4);
			StringConCat(&cVar9, func_117(iVar0[2]), 4);
			if (SOCIALCLUB::SC_PROFANITY_CHECK_STRING(&cVar9, &(Local_152.f_436)))
			{
				func_133("Frontend_Entered_Score");
			}
		}
		else if (func_130(Local_152.f_178) == 99)
		{
			func_133("Frontend_Change_Screen");
			func_15(10);
		}
		return;
	}
	if (func_130(Local_152.f_178) == 99)
	{
		return;
	}
	if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, iVar8))
	{
		if (Local_152.f_432 > 0)
		{
			Local_152.f_432 = (Local_152.f_432 - 1);
		}
		return;
	}
	iVar10 = 0;
	if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, iVar5))
	{
		iVar10 = 1;
	}
	else if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, iVar6))
	{
		iVar10 = -1;
	}
	if (iVar10 == 0)
	{
		return;
	}
	func_133("Frontend_Change_Letter");
	func_119(Local_811[Local_152.f_178 /*9*/].f_7, &iVar0);
	iVar0[Local_152.f_432] = (iVar0[Local_152.f_432] + iVar10);
	if (iVar0[Local_152.f_432] >= 36)
	{
		iVar0[Local_152.f_432] = 0;
	}
	else if (iVar0[Local_152.f_432] < 0)
	{
		iVar0[Local_152.f_432] = 35;
	}
	Local_811[Local_152.f_178 /*9*/].f_7 = func_131(&iVar0);
}

int func_130(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (Local_605.f_165[iVar0 /*3*/].f_2 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 99;
}

var func_131(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_132(&uVar1, iVar0, 6, (*iParam0)[iVar0]);
		iVar0++;
	}
	return uVar1;
}

void func_132(var uParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	
	uVar0 = func_121(iParam2, (iParam1 * iParam2));
	*uParam0 = (*uParam0 - (*uParam0 && uVar0));
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam3, (iParam1 * iParam2)));
}

void func_133(char* sParam0)
{
	AUDIO::PLAY_SOUND_FRONTEND(-1, sParam0, "dlc_vw_am_tw_frontend_sounds", false);
}

void func_134()
{
	struct<2> Var0;
	int iVar2;
	
	Var0.f_0 = -713331550;
	Var0.f_1 = PLAYER::PLAYER_ID();
	iVar2 = func_135(1);
	if (!iVar2 == 0)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 2, iVar2);
	}
}

var func_135(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (func_61(iVar2, 0, 0))
			{
				if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
				{
					MISC::SET_BIT(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_136()
{
	struct<2> Var0;
	
	MISC::SET_BIT(&(Local_152.f_417), false);
	if (func_130(Local_152.f_178) == 99)
	{
		StringCopy(&Var0, "SC_H_LBD_2", 16);
	}
	else if (Local_152.f_432 == 2)
	{
		StringCopy(&Var0, "SC_H_LBD_1", 16);
	}
	else
	{
		StringCopy(&Var0, "SC_H_LBD_0", 16);
	}
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		StringConCat(&Var0, "PC", 16);
	}
	if (func_128(&Var0))
	{
		return;
	}
	func_16();
	func_126(&Var0);
}

void func_137()
{
	var uVar0[4];
	int iVar5;
	struct<2> Var6;
	int iVar8;
	int iVar9;
	
	func_124();
	iVar5 = 0;
	while (iVar5 <= 3)
	{
		func_139(iVar5, 1);
		if (Local_152.f_149[iVar5] == -1)
		{
		}
		else
		{
			Var6 = { func_138(iVar5) };
			iVar8 = func_130(Local_152.f_149[iVar5]);
			HUD::SET_TEXT_SCALE(1.1f, 1.1f);
			HUD::SET_TEXT_COLOUR(0, 0, 0, 255);
			HUD::SET_TEXT_CENTRE(true);
			HUD::SET_TEXT_FONT(7);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(func_118(iVar8));
			HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_122((Var6.f_0 + 0.001041667f)), (0.205f + 0.003703704f), 0);
			HUD::SET_TEXT_SCALE(1.1f, 1.1f);
			HUD::SET_TEXT_COLOUR(Local_152.f_107[iVar5 /*4*/], Local_152.f_107[iVar5 /*4*/].f_1, Local_152.f_107[iVar5 /*4*/].f_2, 255);
			HUD::SET_TEXT_CENTRE(true);
			HUD::SET_TEXT_FONT(7);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(func_118(iVar8));
			HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_122(Var6.f_0), 0.205f, 0);
			iVar9 = Local_811[Local_152.f_149[iVar5] /*9*/].f_8;
			HUD::SET_TEXT_SCALE(0.75f, 0.75f);
			HUD::SET_TEXT_COLOUR(0, 0, 0, 255);
			HUD::SET_TEXT_CENTRE(true);
			HUD::SET_TEXT_FONT(7);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("SCGW_PTS");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iVar9);
			HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_122((Var6.f_0 + 0.001041667f)), (0.26f + 0.003703704f), 0);
			HUD::SET_TEXT_SCALE(0.75f, 0.75f);
			HUD::SET_TEXT_COLOUR(Local_152.f_107[iVar5 /*4*/], Local_152.f_107[iVar5 /*4*/].f_1, Local_152.f_107[iVar5 /*4*/].f_2, 255);
			HUD::SET_TEXT_CENTRE(true);
			HUD::SET_TEXT_FONT(7);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("SCGW_PTS");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iVar9);
			HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_122(Var6.f_0), 0.26f, 0);
			if (Local_152.f_149[iVar5] != Local_152.f_178)
			{
			}
			else if (iVar8 >= 10)
			{
			}
			else
			{
				func_119(Local_811[Local_152.f_149[iVar5] /*9*/].f_7, &uVar0);
				HUD::SET_TEXT_SCALE(0.95f, 0.95f);
				HUD::SET_TEXT_COLOUR(0, 0, 0, 255);
				HUD::SET_TEXT_CENTRE(true);
				HUD::SET_TEXT_FONT(7);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_117(uVar0[0]));
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_122(((Var6.f_0 - 0.025f) + 0.001041667f)), (0.875f + 0.003703704f), 0);
				HUD::SET_TEXT_SCALE(0.95f, 0.95f);
				if (Local_152.f_432 == 0)
				{
					HUD::SET_TEXT_COLOUR(Local_152.f_107[iVar5 /*4*/], Local_152.f_107[iVar5 /*4*/].f_1, Local_152.f_107[iVar5 /*4*/].f_2, 255);
				}
				else
				{
					HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
				}
				HUD::SET_TEXT_CENTRE(true);
				HUD::SET_TEXT_FONT(7);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_117(uVar0[0]));
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_122((Var6.f_0 - 0.025f)), 0.875f, 0);
				func_119(Local_811[Local_152.f_149[iVar5] /*9*/].f_7, &uVar0);
				HUD::SET_TEXT_SCALE(0.95f, 0.95f);
				HUD::SET_TEXT_COLOUR(0, 0, 0, 255);
				HUD::SET_TEXT_CENTRE(true);
				HUD::SET_TEXT_FONT(7);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_117(uVar0[1]));
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_122((Var6.f_0 + 0.001041667f)), (0.875f + 0.003703704f), 0);
				HUD::SET_TEXT_SCALE(0.95f, 0.95f);
				if (Local_152.f_432 == 1)
				{
					HUD::SET_TEXT_COLOUR(Local_152.f_107[iVar5 /*4*/], Local_152.f_107[iVar5 /*4*/].f_1, Local_152.f_107[iVar5 /*4*/].f_2, 255);
				}
				else
				{
					HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
				}
				HUD::SET_TEXT_CENTRE(true);
				HUD::SET_TEXT_FONT(7);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_117(uVar0[1]));
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_122(Var6.f_0), 0.875f, 0);
				func_119(Local_811[Local_152.f_149[iVar5] /*9*/].f_7, &uVar0);
				HUD::SET_TEXT_SCALE(0.95f, 0.95f);
				HUD::SET_TEXT_COLOUR(0, 0, 0, 255);
				HUD::SET_TEXT_CENTRE(true);
				HUD::SET_TEXT_FONT(7);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_117(uVar0[2]));
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_122(((Var6.f_0 + 0.025f) + 0.001041667f)), (0.875f + 0.003703704f), 0);
				HUD::SET_TEXT_SCALE(0.95f, 0.95f);
				if (Local_152.f_432 == 2)
				{
					HUD::SET_TEXT_COLOUR(Local_152.f_107[iVar5 /*4*/], Local_152.f_107[iVar5 /*4*/].f_1, Local_152.f_107[iVar5 /*4*/].f_2, 255);
				}
				else
				{
					HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
				}
				HUD::SET_TEXT_CENTRE(true);
				HUD::SET_TEXT_FONT(7);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_117(uVar0[2]));
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_122((Var6.f_0 + 0.025f)), 0.875f, 0);
			}
		}
		iVar5++;
	}
	func_104();
	func_103();
}

struct<2> func_138(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_108(0.2552083f, 0.4564815f);
		
		case 1:
			return func_108(0.4182292f, 0.4564815f);
		
		case 2:
			return func_108(0.5817708f, 0.4564815f);
		
		case 3:
			return func_108(0.7447917f, 0.4564815f);
		
		default:
	}
	return func_108(0.5f, 0.5f);
}

void func_139(int iParam0, bool bParam1)
{
	struct<2> Var0;
	struct<2> Var2;
	struct<4> Var4;
	struct<2> Var8;
	char cVar10[16];
	float fVar14;
	struct<4> Var15;
	
	Var0 = { func_138(iParam0) };
	Var2 = { func_146() };
	func_123(func_145(iParam0), func_144(iParam0), Var0.f_0, Var0.f_1, Var2.f_0, Var2.f_1, 0f, Local_152.f_107.f_17);
	if (Local_152.f_149[iParam0] == Local_152.f_178)
	{
		Var4 = { Local_152.f_107[iParam0 /*4*/] };
		if (Local_811[Local_152.f_178 /*9*/] != 1)
		{
			Var4.f_3 = SYSTEM::ROUND(MISC::TAN((SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) * 0.25f))) * 255;
		}
		Var8 = { func_143(iParam0) };
		func_123("MPArcadeCabinetGridHUD", "gang_lobby_player_highlight", Var8.f_0, Var8.f_1, 0.1625f, 0.05185185f, 0f, Var4);
	}
	if (Local_152.f_149[iParam0] != -1)
	{
		HUD::SET_TEXT_SCALE(0.5f, 0.5f);
		HUD::SET_TEXT_COLOUR(Local_152.f_107[iParam0 /*4*/], Local_152.f_107[iParam0 /*4*/].f_1, Local_152.f_107[iParam0 /*4*/].f_2, 255);
		HUD::SET_TEXT_CENTRE(true);
		HUD::SET_TEXT_FONT(4);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		if (!func_142(iParam0))
		{
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_152.f_149[iParam0]))));
		}
		else
		{
			StringCopy(&cVar10, "Bot ", 16);
			switch (iParam0)
			{
				case 0:
					StringConCat(&cVar10, "Green", 16);
					break;
				
				case 1:
					StringConCat(&cVar10, "Purple", 16);
					break;
				
				case 2:
					StringConCat(&cVar10, "Yellow", 16);
					break;
				
				case 3:
					StringConCat(&cVar10, "Blue", 16);
					break;
			}
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&cVar10);
		}
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_122(Var0.f_0), 0.845f, 0);
	}
	if (bParam1)
	{
		return;
	}
	if (Local_152.f_149[iParam0] != -1 && Local_811[Local_152.f_149[iParam0] /*9*/] == 1)
	{
		HUD::SET_TEXT_SCALE(0.95f, 0.95f);
		HUD::SET_TEXT_COLOUR(0, 0, 0, 255);
		HUD::SET_TEXT_CENTRE(true);
		HUD::SET_TEXT_FONT(7);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("SCGW_R");
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_122((Var0.f_0 + 0.001041667f)), (0.23f + 0.003703704f), 0);
		HUD::SET_TEXT_SCALE(0.95f, 0.95f);
		HUD::SET_TEXT_COLOUR(Local_152.f_107[iParam0 /*4*/], Local_152.f_107[iParam0 /*4*/].f_1, Local_152.f_107[iParam0 /*4*/].f_2, 255);
		HUD::SET_TEXT_CENTRE(true);
		HUD::SET_TEXT_FONT(7);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("SCGW_R");
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_122(Var0.f_0), 0.23f, 0);
	}
	if (Local_152.f_154[iParam0] != -2147483647 && (NETWORK::GET_NETWORK_TIME() - Local_152.f_154[iParam0]) <= 1000)
	{
		fVar14 = (SYSTEM::TO_FLOAT((NETWORK::GET_NETWORK_TIME() - Local_152.f_154[iParam0])) / 1000f);
		Var15 = { Local_152.f_107[iParam0 /*4*/] };
		Var15.f_3 = SYSTEM::ROUND(func_140(125f, 0f, fVar14, 1));
		Var2.f_1 = (Var2.f_1 - 0.05f);
		Var0.f_1 = (Var0.f_1 + (0.05f / 2f));
		func_111(Var0, Var2, Var15);
	}
}

float func_140(float fParam0, float fParam1, float fParam2, int iParam3)
{
	float fVar0;
	
	switch (iParam3)
	{
		case 1:
		case 6:
			fParam2 = SYSTEM::POW(fParam2, 2f);
			break;
		
		case 2:
		case 7:
			fParam2 = (1f - SYSTEM::POW((1f - fParam2), 2f));
			break;
		
		case 3:
		case 8:
			fParam2 = ((-SYSTEM::COS(func_141((3.141593f * fParam2))) / 2f) + 0.5f);
			break;
		
		case 4:
		case 9:
			fParam2 = (SYSTEM::POW(fParam2, 2f) * (3f - (2f * fParam2)));
			break;
	}
	switch (iParam3)
	{
		case 0:
			fVar0 = (fParam0 + (fParam2 * (fParam1 - fParam0)));
			break;
		
		case 1:
		case 2:
		case 3:
		case 4:
			fVar0 = func_140(fParam0, fParam1, fParam2, 0);
			break;
		
		case 5:
			fVar0 = (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
			fVar0 = func_140(fParam0, fParam1, fParam2, 5);
			break;
	}
	return fVar0;
}

float func_141(float fParam0)
{
	return (fParam0 * 57.29578f);
}

int func_142(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Local_913[iVar0 /*37*/].f_25)
		{
			if (Local_913[iVar0 /*37*/].f_6 == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

struct<2> func_143(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_108(0.2552083f, 0.1435185f);
		
		case 1:
			return func_108(0.4182292f, 0.1435185f);
		
		case 2:
			return func_108(0.5817708f, 0.1435185f);
		
		case 3:
			return func_108(0.7447917f, 0.1435185f);
		
		default:
	}
	return func_108(0.5f, 0.5f);
}

char* func_144(int iParam0)
{
	if (Local_152.f_149[iParam0] == -1)
	{
		switch (iParam0)
		{
			case 0:
				return "Gang_Lobby_Green_Off";
			
			case 1:
				return "Gang_Lobby_Purple_Off";
			
			case 2:
				return "Gang_Lobby_Yellow_Off";
			
			case 3:
				return "Gang_Lobby_Blue_Off";
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return "Gang_Lobby_Green_On";
			
			case 1:
				return "Gang_Lobby_Purple_On";
			
			case 2:
				return "Gang_Lobby_Yellow_On";
			
			case 3:
				return "Gang_Lobby_Blue_On";
			}
		
		default:
	}
	return "INVALID GANG";
}

char* func_145(int iParam0)
{
	if (Local_152.f_149[iParam0] != -1)
	{
		switch (iParam0)
		{
			case 0:
				return "MPArcadeCabinetGridPlayerGreen";
			
			case 1:
				return "MPArcadeCabinetGridPlayerPurple";
			
			case 2:
				return "MPArcadeCabinetGridPlayerYellow";
			
			case 3:
				return "MPArcadeCabinetGridPlayerBlue";
			}
		
		default:
	}
	return "MPArcadeCabinetGridHUD";
}

struct<2> func_146()
{
	return func_108(0.1625f, 0.7777778f);
}

int func_147()
{
	if (NETWORK::_NETWORK_GET_ROS_PRIVILEGE_9() == 0)
	{
		return 0;
	}
	if (func_149())
	{
		if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(1))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	else if (func_148())
	{
		if (NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -3, true))
		{
			return 1;
		}
	}
	else if (MISC::IS_PC_VERSION())
	{
		if (NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, -1))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_148()
{
	return (MISC::IS_DURANGO_VERSION() || unk_0xC545AB1CF97ABB34());
}

bool func_149()
{
	return (MISC::IS_ORBIS_VERSION() || unk_0x807ABE1AB65C24D2());
}

void func_150()
{
	bool bVar0;
	
	bVar0 = func_64();
	if (bVar0)
	{
		func_192();
	}
	else
	{
		func_174();
	}
	func_171();
	if (Local_605.f_145 >= 6)
	{
		func_170(&(Local_152.f_428));
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_in_menus_scene"))
		{
			AUDIO::START_AUDIO_SCENE("dlc_vw_am_tw_in_menus_scene");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_in_gameplay_scene"))
		{
			AUDIO::STOP_AUDIO_SCENE("dlc_vw_am_tw_in_gameplay_scene");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_vehicle_drivethrough_scene"))
		{
			AUDIO::STOP_AUDIO_SCENE("dlc_vw_am_tw_vehicle_drivethrough_scene");
		}
		func_18(func_19(0));
		func_15(9);
		return;
	}
	if (Local_605.f_145 == 2 || Local_605.f_145 == 3)
	{
		func_170(&(Local_152.f_428));
		func_15(5);
		return;
	}
	func_169("Ambience", &(Local_152.f_428), func_108(-1f, -1f), 0);
	if (Global_1932185 != 4)
	{
		return;
	}
	if (bVar0)
	{
		if (Local_605.f_131[(Local_605.f_137 - 1)] != -1)
		{
			if (Local_605.f_131[(Local_605.f_137 - 1)] == Local_152.f_178)
			{
				func_168(7);
				func_164("Win", Local_152.f_178, &(Local_152.f_204[Local_152.f_178 /*19*/].f_6));
			}
			else
			{
				func_168(8);
				func_164("Lose_Game", Local_152.f_178, &(Local_152.f_204[Local_152.f_178 /*19*/].f_6));
			}
			func_163((16 + Local_811[Local_605.f_131[(Local_605.f_137 - 1)] /*9*/].f_6));
		}
	}
	else if (Local_605.f_130 != -1)
	{
		if (Local_605.f_130 == Local_152.f_178)
		{
			func_159();
			func_168(9);
			func_164("Win", Local_152.f_178, &(Local_152.f_204[Local_152.f_178 /*19*/].f_6));
		}
		else
		{
			func_168(10);
			func_164("Lose_Game", Local_152.f_178, &(Local_152.f_204[Local_152.f_178 /*19*/].f_6));
		}
		func_163((16 + Local_811[Local_605.f_130 /*9*/].f_6));
	}
	if ((!BitTest(Local_152.f_141, 2) && Local_605.f_131[(Local_605.f_137 - 1)] != -1) && Local_605.f_131[(Local_605.f_137 - 1)] == Local_152.f_178)
	{
		if (!func_158(247, -1))
		{
			func_155(247, 1, -1, 1);
			func_153(12, "CLO_VWM_D_1_1", "UNLOCK_NAME_SHIRT3", "FeedhitTshirt04", "MPTshirtAwards3", -1, 0, 0, 0, -1, 1);
			func_152(27193, 1, -1);
			func_151("SCGW_CH_4", 7500, 1);
		}
	}
}

void func_151(char* sParam0, int iParam1, int iParam2)
{
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		func_16();
	}
	Local_152.f_418 = (NETWORK::GET_NETWORK_TIME() + iParam1);
	Local_152.f_419 = sParam0;
	Local_152.f_420 = -1;
	Local_152.f_421 = iParam2;
}

void func_152(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_33();
	}
	STATS::_SET_PACKED_STAT_BOOL(iParam0, bParam1, iParam2);
}

void func_153(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = func_154(&Global_1652546);
	Global_1652546[iVar0 /*106*/] = iParam0;
	StringCopy(&(Global_1652546[iVar0 /*106*/].f_17), sParam3, 64);
	StringCopy(&(Global_1652546[iVar0 /*106*/].f_1), sParam4, 64);
	StringCopy(&(Global_1652546[iVar0 /*106*/].f_33), sParam1, 64);
	StringCopy(&(Global_1652546[iVar0 /*106*/].f_49), sParam2, 64);
	Global_1652546[iVar0 /*106*/].f_97 = iParam5;
	Global_1652546[iVar0 /*106*/].f_104 = iParam9;
	Global_1652546[iVar0 /*106*/].f_105 = iParam10;
	if (iParam6 != 0)
	{
	}
	if (iParam7 != 0)
	{
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		StringCopy(&(Global_1652546[iVar0 /*106*/].f_98), sParam8, 24);
	}
}

int func_154(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if ((*uParam0)[iVar1 /*106*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

void func_155(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (func_157())
	{
		iVar0 = Global_2860791[iParam0 /*3*/][func_156(iParam2)];
		if (iVar0 != 0)
		{
			STATS::STAT_SET_BOOL(iVar0, bParam1, bParam3);
		}
	}
}

int func_156(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_33();
		if (iVar1 > -1)
		{
			Global_2822083 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2822083 = 1;
		}
	}
	return iVar0;
}

int func_157()
{
	return 1;
	return 0;
}

int func_158(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2860791[iParam0 /*3*/][func_156(iParam1)];
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_159()
{
	int iVar0;
	
	switch (Local_811[Local_152.f_178 /*9*/].f_6)
	{
		case 0:
			iVar0 = func_162(8354, -1, 0) + 1;
			func_161(8354, iVar0, -1, 1, 0);
			if (iVar0 == Global_262145.f_26922)
			{
				func_152(27189, 1, -1);
				func_153(12, "CLO_VWM_D_1_3", "UNLOCK_NAME_SHIRT3", "FeedhitTshirt04", "MPTshirtAwards3", -1, 0, 0, 0, -1, 1);
				func_160("SCGW_CH_0", Global_262145.f_26922, 7500, 1);
			}
			break;
		
		case 1:
			iVar0 = func_162(8355, -1, 0) + 1;
			func_161(8355, iVar0, -1, 1, 0);
			if (iVar0 == Global_262145.f_26922)
			{
				func_152(27190, 1, -1);
				func_153(12, "CLO_VWM_D_1_4", "UNLOCK_NAME_SHIRT3", "FeedhitTshirt04", "MPTshirtAwards3", -1, 0, 0, 0, -1, 1);
				func_160("SCGW_CH_1", Global_262145.f_26922, 7500, 1);
			}
			break;
		
		case 2:
			iVar0 = func_162(8356, -1, 0) + 1;
			func_161(8356, iVar0, -1, 1, 0);
			if (iVar0 == Global_262145.f_26922)
			{
				func_152(27191, 1, -1);
				func_153(12, "CLO_VWM_D_1_5", "UNLOCK_NAME_SHIRT3", "FeedhitTshirt04", "MPTshirtAwards3", -1, 0, 0, 0, -1, 1);
				func_160("SCGW_CH_2", Global_262145.f_26922, 7500, 1);
			}
			break;
		
		case 3:
			iVar0 = func_162(8357, -1, 0) + 1;
			func_161(8357, iVar0, -1, 1, 0);
			if (iVar0 == Global_262145.f_26922)
			{
				func_152(27192, 1, -1);
				func_153(12, "CLO_VWM_D_1_2", "UNLOCK_NAME_SHIRT3", "FeedhitTshirt04", "MPTshirtAwards3", -1, 0, 0, 0, -1, 1);
				func_160("SCGW_CH_3", Global_262145.f_26922, 7500, 1);
			}
			break;
	}
}

void func_160(char* sParam0, var uParam1, int iParam2, int iParam3)
{
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		func_16();
	}
	Local_152.f_418 = (NETWORK::GET_NETWORK_TIME() + iParam2);
	Local_152.f_420 = uParam1;
	Local_152.f_419 = sParam0;
	Local_152.f_421 = iParam3;
}

void func_161(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2822371[iParam0 /*3*/][func_156(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_162(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 12581)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2822371[iParam0 /*3*/][func_156(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_163(int iParam0)
{
	Global_1932185.f_1 = iParam0;
}

void func_164(char* sParam0, int iParam1, var uParam2)
{
	float fVar0;
	
	fVar0 = func_166(Local_152.f_204[iParam1 /*19*/]);
	if (*uParam2 == -1)
	{
		*uParam2 = AUDIO::GET_SOUND_ID();
	}
	AUDIO::PLAY_SOUND_FRONTEND(*uParam2, sParam0, func_165(Local_811[iParam1 /*9*/].f_6), false);
	AUDIO::SET_VARIABLE_ON_SOUND(*uParam2, "Screen_Position", fVar0);
}

char* func_165(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "dlc_vw_am_tw_gang_Hoods_sounds";
		
		case 1:
			return "dlc_vw_am_tw_gang_Punks_sounds";
		
		case 2:
			return "dlc_vw_am_tw_gang_Yokels_sounds";
		
		case 3:
			return "dlc_vw_am_tw_gang_Bikers_sounds";
		
		default:
	}
	return "INVALID GANG";
}

float func_166(float fParam0, var uParam1)
{
	return func_167(((fParam0 - 0.15625f) / 0.658333f), 0f, 1f);
}

float func_167(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_168(int iParam0)
{
	Global_1932185 = iParam0;
}

void func_169(char* sParam0, var uParam1, struct<2> Param2, bool bParam4)
{
	float fVar0;
	
	fVar0 = func_166(Param2);
	if (bParam4)
	{
	}
	if (*uParam1 == -1)
	{
		*uParam1 = AUDIO::GET_SOUND_ID();
	}
	if (AUDIO::HAS_SOUND_FINISHED(*uParam1))
	{
		AUDIO::PLAY_SOUND_FRONTEND(*uParam1, sParam0, "dlc_vw_am_tw_global_sounds", false);
	}
	if (bParam4)
	{
		AUDIO::SET_VARIABLE_ON_SOUND(*uParam1, "Screen_Position", fVar0);
	}
}

void func_170(var uParam0)
{
	if (!AUDIO::HAS_SOUND_FINISHED(*uParam0))
	{
		AUDIO::STOP_SOUND(*uParam0);
	}
	AUDIO::RELEASE_SOUND_ID(*uParam0);
	*uParam0 = -1;
}

void func_171()
{
	struct<2> Var0;
	
	if (Local_152.f_418 == -2147483647)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(Local_152.f_419))
	{
		return;
	}
	if (NETWORK::GET_NETWORK_TIME() > Local_152.f_418)
	{
		func_16();
		return;
	}
	MISC::SET_BIT(&(Local_152.f_417), false);
	StringCopy(&Var0, Local_152.f_419, 16);
	if (Local_152.f_420 == -1)
	{
		if (PAD::_IS_USING_KEYBOARD(2) && !Local_152.f_421)
		{
			StringConCat(&Var0, "_PC", 16);
		}
	}
	else
	{
		if (func_128(&Var0))
		{
			return;
		}
		func_172(&Var0, Local_152.f_420);
		return;
	}
	if (func_128(&Var0))
	{
		return;
	}
	func_126(&Var0);
}

void func_172(char* sParam0, int iParam1)
{
	Local_152.f_442 = MISC::GET_HASH_KEY(sParam0);
	func_173(sParam0, iParam1, -1);
}

void func_173(char* sParam0, int iParam1, int iParam2)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam2);
}

void func_174()
{
	func_124();
	func_188();
	func_182();
	func_180();
	func_175();
	func_104();
	func_103();
}

void func_175()
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	char cVar6[16];
	
	func_111(func_108(0.5f, (0.069444f + 0.0356482f)), func_108(0.658333f, 0.071296f), Local_152.f_107.f_21);
	func_111(func_108(0.5f, (0.069444f + 0.072685f)), func_108(0.658333f, 0.002778f), Local_152.f_107.f_25);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_177(iVar0, Local_152.f_149[iVar0]);
		iVar0++;
	}
	fVar1 = ((SYSTEM::TO_FLOAT((Local_605.f_138 - 1)) / 2f) * -0.01354133f);
	iVar0 = 0;
	while (iVar0 <= (Local_605.f_138 - 1))
	{
		func_123("MPArcadeCabinetGridHUD", "hud_rounds", ((fVar1 + 0.5f) + (0.01354133f * IntToFloat(iVar0))), (((0.069444f + -0.00162963f) + (0.02407426f / 2f)) + 0.00462963f), 0.01354133f, 0.02407426f, 0f, func_176(iVar0));
		iVar0++;
	}
	iVar2 = 0;
	iVar3 = 0;
	iVar4 = 0;
	if (Local_605.f_145 == 4 && !Local_605.f_162)
	{
		iVar2 = ((Local_605.f_146 + 120000) - NETWORK::GET_NETWORK_TIME());
	}
	iVar3 = (iVar2 / 60000);
	iVar4 = ((iVar2 / 1000) % 60);
	HUD::SET_TEXT_SCALE(1f, 1f);
	if (iVar2 < 10000 && Local_605.f_145 == 4)
	{
		if (!BitTest(Local_152.f_429, 5))
		{
			func_133("Frontend_Countdown_10s");
			MISC::SET_BIT(&(Local_152.f_429), 5);
		}
		iVar5 = SYSTEM::ROUND((SYSTEM::SIN((SYSTEM::TO_FLOAT(NETWORK::GET_NETWORK_TIME()) * (0.5058f / 2f))) * 255f));
		if (iVar5 > 51)
		{
			iVar5 = 255;
		}
		else
		{
			iVar5 = 0;
		}
		HUD::SET_TEXT_COLOUR(255, 0, 0, iVar5);
	}
	else if (iVar2 < 30000 && Local_605.f_145 == 4)
	{
		HUD::SET_TEXT_COLOUR(255, 0, 0, 255);
	}
	else
	{
		HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
	}
	HUD::SET_TEXT_DROP_SHADOW();
	HUD::SET_TEXT_CENTRE(true);
	HUD::SET_TEXT_FONT(7);
	StringCopy(&cVar6, "SCGW_ROUND_T", 16);
	if (iVar4 < 10)
	{
		StringConCat(&cVar6, "_S", 16);
	}
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&cVar6);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iVar3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iVar4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(0.5f, (0.083f + 0.00462963f), 0);
}

struct<4> func_176(int iParam0)
{
	if (Local_605.f_131[iParam0] == -1)
	{
		return Local_152.f_107.f_17;
	}
	return Local_152.f_107[Local_811[Local_605.f_131[iParam0] /*9*/].f_6 /*4*/];
}

void func_177(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	struct<8> Var2;
	int iVar18;
	int iVar19;
	
	fVar1 = func_179(iParam0);
	if (iParam1 == -1)
	{
		func_123("MPArcadeCabinetGridHUD", "hud_insert_coin", (fVar1 + (0.127083f / 2f)), (0.069444f + 0.04166683f), 0.127083f, 0.059259f, 0f, Local_152.f_107[iParam0 /*4*/]);
	}
	else if (func_68(iParam1))
	{
		func_123("MPArcadeCabinetGridHUD", "hud_wasted", (fVar1 + (0.127083f / 2f)), (0.069444f + 0.04166683f), 0.127083f, 0.059259f, 0f, Local_152.f_107.f_29);
	}
	else
	{
		func_123("MPArcadeCabinetGridHUD", "hud_frame", (fVar1 + (0.127083f / 2f)), (0.069444f + 0.04166683f), 0.127083f, 0.059259f, 0f, Local_152.f_107[iParam0 /*4*/]);
	}
	StringCopy(&Var2, "hud_head_", 64);
	StringConCat(&Var2, Local_152.f_422[iParam0], 64);
	func_123("MPArcadeCabinetGridHUD", &Var2, (fVar1 + (0.033333f / 2f)), (0.069444f + 0.04166683f), 0.033333f, 0.059259f, 0f, Local_152.f_107.f_17);
	if (iParam1 == -1)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1)))
	{
		iVar18 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1));
		if (NETWORK::NETWORK_IS_PLAYER_TALKING(iVar18))
		{
			func_123("MPArcadeCabinetGridHUD", "hud_mic", ((fVar1 + 0.026563f) + (0.008333f / 2f)), ((0.069444f + 0.04722233f) + (0.014815f / 2f)), 0.008333f, 0.014815f, 0f, Local_152.f_107[iParam0 /*4*/]);
		}
	}
	else if (Local_913[iParam1 /*37*/].f_25)
	{
	}
	if (Local_811[iParam1 /*9*/] == 2)
	{
		iVar19 = (Local_152.f_204[iParam1 /*19*/].f_9 - 1);
		iVar0 = 0;
		while (iVar0 <= iVar19)
		{
			if (iVar0 >= Local_811[iParam1 /*9*/].f_2 && Local_152.f_140 == 7)
			{
				func_123("MPArcadeCabinetGridHUD", "hud_health", (((fVar1 + 0.035417f) + (0.00625f * IntToFloat(iVar0))) + (0.00625f / 2f)), ((0.069444f + 0.01203733f) + (0.059259f / 2f)), 0.00625f, 0.059259f, 0f, Local_152.f_107.f_29);
			}
			else
			{
				func_123("MPArcadeCabinetGridHUD", "hud_health", (((fVar1 + 0.035417f) + (0.00625f * IntToFloat(iVar0))) + (0.00625f / 2f)), ((0.069444f + 0.01203733f) + (0.059259f / 2f)), 0.00625f, 0.059259f, 0f, func_178(Local_152.f_107[iParam0 /*4*/], (SYSTEM::TO_FLOAT(iVar0) / 7f)));
			}
			iVar0++;
		}
		HUD::SET_TEXT_SCALE(1f, 1f);
		if (((iLocal_806[iParam0] == 0 && Local_605.f_145 == 4) && iParam0 == Local_811[Local_152.f_178 /*9*/].f_6) && SYSTEM::SIN((SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) * 0.5058f)) > 0.5f)
		{
			HUD::SET_TEXT_COLOUR(Local_152.f_107.f_29, Local_152.f_107.f_29.f_1, Local_152.f_107.f_29.f_2, Local_152.f_107.f_29.f_3);
		}
		else
		{
			HUD::SET_TEXT_COLOUR(Local_152.f_107[iParam0 /*4*/], Local_152.f_107[iParam0 /*4*/].f_1, Local_152.f_107[iParam0 /*4*/].f_2, Local_152.f_107[iParam0 /*4*/].f_3);
		}
		HUD::SET_TEXT_DROP_SHADOW();
		HUD::SET_TEXT_CENTRE(true);
		HUD::SET_TEXT_FONT(7);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("SCGW_SCORE");
		HUD::ADD_TEXT_COMPONENT_INTEGER(iLocal_806[iParam0]);
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_122((fVar1 + 0.105f)), 0.083f, 0);
	}
}

struct<4> func_178(struct<4> Param0, float fParam4)
{
	Param0.f_0 = SYSTEM::ROUND(((IntToFloat((255 - Param0.f_0)) * fParam4) + IntToFloat(Param0.f_0)));
	Param0.f_1 = SYSTEM::ROUND(((IntToFloat((255 - Param0.f_1)) * fParam4) + IntToFloat(Param0.f_1)));
	Param0.f_2 = SYSTEM::ROUND(((IntToFloat((255 - Param0.f_2)) * fParam4) + IntToFloat(Param0.f_2)));
	return Param0;
}

float func_179(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0.195313f;
		
		case 1:
			return 0.325521f;
		
		case 2:
			return 0.547396f;
		
		case 3:
			return 0.677604f;
		
		default:
	}
	return 0f;
}

void func_180()
{
	bool bVar0;
	bool bVar1;
	struct<2> Var2;
	int iVar4;
	char cVar5[64];
	struct<4> Var21;
	struct<8> Var25;
	
	if (Local_605.f_130 == -1)
	{
		return;
	}
	func_181(Local_152.f_107[Local_811[Local_605.f_130 /*9*/].f_6 /*4*/], 102);
	bVar0 = false;
	bVar1 = true;
	Var2 = { func_108(0.5f, (0.5f + -0.005f)) };
	iVar4 = 255;
	StringCopy(&cVar5, "text_gang_", 64);
	StringConCat(&cVar5, Local_152.f_422[Local_811[Local_605.f_130 /*9*/].f_6], 64);
	StringConCat(&cVar5, "_", 64);
	if (Local_152.f_415 < 4)
	{
		Var2.f_1 = (Var2.f_1 + (-0.05f / IntToFloat(Local_152.f_415 + 1)));
		bVar1 = false;
		Local_152.f_415 = (Local_152.f_415 + Local_152.f_412);
	}
	else if (Local_152.f_415 < 12)
	{
		iVar4 = SYSTEM::FLOOR(((255f / 8f) * IntToFloat((8 - (Local_152.f_415 - 4)))));
		bVar0 = true;
		bVar1 = false;
		Local_152.f_415 = (Local_152.f_415 + Local_152.f_412);
	}
	else if (Local_152.f_415 < 22)
	{
		if (((Local_152.f_415 + 1 - 4) - 8) < 10)
		{
			StringConCat(&cVar5, "0", 64);
		}
		StringIntConCat(&cVar5, ((Local_152.f_415 + 1 - 4) - 8), 64);
		Local_152.f_415 = (Local_152.f_415 + Local_152.f_414);
	}
	else
	{
		StringIntConCat(&cVar5, 10, 64);
	}
	if (bVar0)
	{
		Var21 = { Local_152.f_107.f_17 };
		Var21.f_3 = iVar4;
		func_123("MPArcadeCabinetGridHUD", "text_bkgd_blur", Var2.f_0, Var2.f_1, 0.3125f, 0.1481481f, 0f, Var21);
	}
	func_123("MPArcadeCabinetGridHUD", "text_winner", Var2.f_0, Var2.f_1, 0.3125f, 0.1481481f, 0f, Local_152.f_107.f_17);
	if (bVar1)
	{
		StringCopy(&Var25, "MPArcadeCabinetGridPlayer", 64);
		StringConCat(&Var25, Local_152.f_422[Local_811[Local_605.f_130 /*9*/].f_6], 64);
		func_123(&Var25, &cVar5, Var2.f_0, (Var2.f_1 + 0.07407407f), 0.3125f, 0.1481481f, 0f, Local_152.f_107[Local_811[Local_605.f_130 /*9*/].f_6 /*4*/]);
	}
}

void func_181(struct<4> Param0, int iParam4)
{
	Param0.f_3 = iParam4;
	func_111(func_108(0.5f, 0.5f), func_108(1f, 1f), Param0);
}

void func_182()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	int iVar7;
	struct<2> Var8;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	struct<4> Var14;
	int iVar18;
	int iVar19;
	float fVar20;
	struct<2> Var21;
	struct<2> Var23;
	
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			iVar3 = func_71(iVar0, iVar1);
			if (iVar0 + 1 < 13)
			{
				iVar4 = func_71(iVar0 + 1, iVar1);
				iVar2 = 0;
				while (iVar2 <= 3)
				{
					if (func_81(&(Local_605.f_85[iVar2 /*11*/][1 /*5*/]), iVar3))
					{
						Var5 = { func_185(func_186(func_187(iVar3), func_187(iVar4)), 2f) };
						func_123("MPArcadeCabinetGrid", "player_trail", Var5.f_0, Var5.f_1, 0.05208333f, 0.02962963f, 0f, Local_152.f_107[iVar2 /*4*/]);
					}
					else
					{
						iVar2++;
					}
				}
			}
			if (iVar1 + 1 < 9)
			{
				iVar7 = func_71(iVar0, iVar1 + 1);
				iVar2 = 0;
				while (iVar2 <= 3)
				{
					if (func_81(&(Local_605.f_85[iVar2 /*11*/][0 /*5*/]), iVar3))
					{
						Var8 = { func_185(func_186(func_187(iVar3), func_187(iVar7)), 2f) };
						func_123("MPArcadeCabinetGrid", "player_trail", Var8.f_0, Var8.f_1, 0.05208333f, 0.02962963f, 90f, Local_152.f_107[iVar2 /*4*/]);
					}
					else
					{
						iVar2++;
					}
				}
			}
			iVar1++;
		}
		iVar0++;
	}
	Var14.f_3 = 255;
	iVar18 = 0;
	iVar18 = 0;
	while (iVar18 <= 3)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar18)) && !Local_913[iVar18 /*37*/].f_25)
		{
		}
		else if (Local_811[iVar18 /*9*/].f_6 == -1)
		{
		}
		else if (Local_848[iVar18 /*16*/] == Local_848[iVar18 /*16*/].f_1)
		{
		}
		else
		{
			func_184(Local_848[iVar18 /*16*/], &iVar10, &iVar11);
			func_184(Local_848[iVar18 /*16*/].f_1, &iVar12, &iVar13);
			iVar19 = -1;
			Var14 = { Local_152.f_107[Local_811[iVar18 /*9*/].f_6 /*4*/] };
			fVar20 = (SYSTEM::TO_FLOAT((NETWORK::GET_NETWORK_TIME() - Local_848[iVar18 /*16*/].f_2)) / SYSTEM::TO_FLOAT(func_183(iVar18)));
			if (fVar20 > 1.2f)
			{
			}
			else
			{
				Var14.f_3 = SYSTEM::ROUND((255f * func_140(0f, 1f, fVar20, 6)));
				if (iVar12 != iVar10)
				{
					if (iVar12 > iVar10)
					{
						iVar19 = Local_848[iVar18 /*16*/];
					}
					else
					{
						iVar19 = func_71((iVar10 - 1), iVar11);
					}
					if (func_81(&(Local_605.f_85[Local_811[iVar18 /*9*/].f_6 /*11*/][1 /*5*/]), iVar19))
					{
					}
					else
					{
						Var21 = { func_185(func_186(func_187(Local_848[iVar18 /*16*/].f_1), func_187(Local_848[iVar18 /*16*/])), 2f) };
						func_123("MPArcadeCabinetGrid", "player_trail", Var21.f_0, Var21.f_1, 0.05208333f, 0.02962963f, 0f, Var14);
						Jump @804; //curOff = 660
						if (iVar13 != iVar11)
						{
							if (iVar13 > iVar11)
							{
								iVar19 = Local_848[iVar18 /*16*/];
							}
							else
							{
								iVar19 = func_71(iVar10, (iVar11 - 1));
							}
							if (func_81(&(Local_605.f_85[Local_811[iVar18 /*9*/].f_6 /*11*/][0 /*5*/]), iVar19))
							{
							}
							else
							{
								Var23 = { func_185(func_186(func_187(Local_848[iVar18 /*16*/].f_1), func_187(Local_848[iVar18 /*16*/])), 2f) };
								func_123("MPArcadeCabinetGrid", "player_trail", Var23.f_0, Var23.f_1, 0.05208333f, 0.02962963f, 90f, Var14);
							}
						}
					}
					iVar18++;
				}

int func_183(int iParam0)
{
	return SYSTEM::ROUND((700f * Local_811[iParam0 /*9*/].f_1));
}

void func_184(int iParam0, bool bParam1, bool bParam2)
{
	*bParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 13f));
	*bParam1 = (iParam0 - *bParam2 * 13);
}

struct<2> func_185(struct<2> Param0, float fParam2)
{
	struct<2> Var0;
	
	Var0.f_0 = (Param0.f_0 / fParam2);
	Var0.f_1 = (Param0.f_1 / fParam2);
	return Var0;
}

struct<2> func_186(struct<2> Param0, struct<2> Param2)
{
	struct<2> Var0;
	
	Var0.f_0 = (Param0.f_0 + Param2.f_0);
	Var0.f_1 = (Param0.f_1 + Param2.f_1);
	return Var0;
}

struct<2> func_187(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	
	func_184(iParam0, &iVar0, &iVar1);
	Var2.f_0 = (0.1380207f + (0.0520835f * IntToFloat(iVar0 + 1)));
	Var2.f_1 = (0.06851837f + (0.0925925f * IntToFloat(iVar1 + 1)));
	return Var2;
}

void func_188()
{
	int iVar0;
	int iVar1;
	struct<8> Var2;
	int iVar18;
	struct<2> Var19;
	struct<2> Var21;
	struct<2> Var23;
	struct<2> Var25;
	struct<2> Var27;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			StringCopy(&Var2, "top_down_tile_", 64);
			iVar18 = Local_605.f_31[iVar0 /*5*/][iVar1] + 1;
			StringIntConCat(&Var2, iVar18, 64);
			Var19 = { func_191(iVar0, iVar1) };
			func_123("MPArcadeCabinetGridTiles", &Var2, Var19.f_0, Var19.f_1, 0.104167f, 0.185185f, 0f, Local_152.f_107.f_17);
			func_189(iVar0, iVar1);
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = -1;
	while (iVar0 <= 6)
	{
		Var21 = { func_191(iVar0, -1) };
		func_123("MPArcadeCabinetGridTiles", "top_down_tile_1", Var21.f_0, Var21.f_1, 0.104167f, 0.185185f, 0f, Local_152.f_107.f_17);
		Var23 = { func_191(iVar0, 4) };
		func_123("MPArcadeCabinetGridTiles", "top_down_tile_1", Var23.f_0, Var23.f_1, 0.104167f, 0.185185f, 0f, Local_152.f_107.f_17);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Var25 = { func_191(-1, iVar0) };
		func_123("MPArcadeCabinetGridTiles", "top_down_tile_1", Var25.f_0, Var25.f_1, 0.104167f, 0.185185f, 0f, Local_152.f_107.f_17);
		Var27 = { func_191(6, iVar0) };
		func_123("MPArcadeCabinetGridTiles", "top_down_tile_1", Var27.f_0, Var27.f_1, 0.104167f, 0.185185f, 0f, Local_152.f_107.f_17);
		iVar0++;
	}
}

void func_189(int iParam0, int iParam1)
{
	struct<8> Var0;
	int iVar16;
	struct<2> Var17;
	float fVar19;
	struct<2> Var20;
	
	if (Local_152.f_318[iParam0 /*5*/][iParam1] != Local_605[iParam0 /*5*/][iParam1])
	{
		Local_152.f_349[iParam0 /*5*/][iParam1] = Local_152.f_318[iParam0 /*5*/][iParam1];
		Local_152.f_380[iParam0 /*5*/][iParam1] = NETWORK::GET_NETWORK_TIME();
		if (Local_152.f_140 == 7)
		{
			func_190("Steal_Area", func_191(iParam0, iParam1), Local_605[iParam0 /*5*/][iParam1]);
		}
	}
	if (Local_152.f_349[iParam0 /*5*/][iParam1] == -1)
	{
		iVar16 = Local_605[iParam0 /*5*/][iParam1];
		if ((NETWORK::GET_NETWORK_TIME() - Local_152.f_380[iParam0 /*5*/][iParam1]) < 600)
		{
			fVar19 = (SYSTEM::TO_FLOAT((NETWORK::GET_NETWORK_TIME() - Local_152.f_380[iParam0 /*5*/][iParam1])) / 600f);
			if (fVar19 > 1f)
			{
				fVar19 = 1f;
			}
			Var17.f_0 = func_140(0f, 0.070833f, fVar19, 2);
			Var17.f_1 = func_140(0f, 0.125926f, fVar19, 2);
		}
		else
		{
			Var17 = { func_108(0.070833f, 0.125926f) };
		}
	}
	else if ((NETWORK::GET_NETWORK_TIME() - Local_152.f_380[iParam0 /*5*/][iParam1]) < 300)
	{
		iVar16 = Local_152.f_349[iParam0 /*5*/][iParam1];
		fVar19 = (SYSTEM::TO_FLOAT((NETWORK::GET_NETWORK_TIME() - Local_152.f_380[iParam0 /*5*/][iParam1])) / 300f);
		if (fVar19 > 1f)
		{
			fVar19 = 1f;
		}
		Var17.f_0 = func_140(0.070833f, 0f, fVar19, 1);
		Var17.f_1 = func_140(0.125926f, 0f, fVar19, 1);
	}
	else
	{
		iVar16 = Local_605[iParam0 /*5*/][iParam1];
		Var17 = { func_108(0.070833f, 0.125926f) };
	}
	if (iVar16 > -1)
	{
		StringCopy(&Var0, "gang_logo_", 64);
		StringConCat(&Var0, Local_152.f_422[iVar16], 64);
		Var20 = { func_191(iParam0, iParam1) };
		func_123("MPArcadeCabinetGrid", &Var0, Var20.f_0, Var20.f_1, Var17.f_0, Var17.f_1, 0f, Local_152.f_107[iVar16 /*4*/]);
	}
	Local_152.f_318[iParam0 /*5*/][iParam1] = Local_605[iParam0 /*5*/][iParam1];
}

void func_190(char* sParam0, struct<2> Param1, int iParam3)
{
	float fVar0;
	int iVar1;
	
	fVar0 = func_166(Param1);
	iVar1 = AUDIO::GET_SOUND_ID();
	AUDIO::PLAY_SOUND_FRONTEND(iVar1, sParam0, func_165(iParam3), false);
	AUDIO::SET_VARIABLE_ON_SOUND(iVar1, "Screen_Position", fVar0);
	AUDIO::RELEASE_SOUND_ID(iVar1);
}

struct<2> func_191(int iParam0, int iParam1)
{
	struct<2> Var0;
	
	Var0.f_0 = (0.1380207f + (0.1041665f * IntToFloat(iParam0 + 1)));
	Var0.f_1 = (0.06851837f + (0.1851855f * IntToFloat(iParam1 + 1)));
	return Var0;
}

void func_192()
{
	func_124();
	func_188();
	func_182();
	func_193();
	func_175();
	func_104();
	func_103();
}

void func_193()
{
	struct<2> Var0;
	char cVar2[64];
	struct<8> Var18;
	
	if (Local_605.f_137 == 0)
	{
		return;
	}
	if (Local_605.f_131[(Local_605.f_137 - 1)] == -1)
	{
		return;
	}
	func_181(Local_152.f_107[Local_811[Local_605.f_131[(Local_605.f_137 - 1)] /*9*/].f_6 /*4*/], 102);
	Var0 = { func_108(0.5f, (0.5f + -0.016f)) };
	func_123("MPArcadeCabinetGridHUD", "text_round_winner", 0.5f, (0.5f + -0.016f), 0.3125f, 0.2407407f, 0f, Local_152.f_107.f_17);
	StringCopy(&cVar2, "text_gang_", 64);
	StringConCat(&cVar2, Local_152.f_422[Local_811[Local_605.f_131[(Local_605.f_137 - 1)] /*9*/].f_6], 64);
	StringConCat(&cVar2, "_", 64);
	if (Local_152.f_415 < 10)
	{
		if (Local_152.f_415 + 1 < 10)
		{
			StringConCat(&cVar2, "0", 64);
		}
		StringIntConCat(&cVar2, Local_152.f_415 + 1, 64);
		Local_152.f_415 = (Local_152.f_415 + Local_152.f_414);
	}
	else
	{
		StringIntConCat(&cVar2, 10, 64);
	}
	StringCopy(&Var18, "MPArcadeCabinetGridPlayer", 64);
	StringConCat(&Var18, Local_152.f_422[Local_811[Local_605.f_131[(Local_605.f_137 - 1)] /*9*/].f_6], 64);
	func_123(&Var18, &cVar2, Var0.f_0, ((Var0.f_1 + 0.07407407f) + ((0.2407407f - 0.1481481f) / 2f)), 0.3125f, 0.1481481f, 0f, Local_152.f_107[Local_811[Local_605.f_131[(Local_605.f_137 - 1)] /*9*/].f_6 /*4*/]);
}

void func_194()
{
	int iVar0;
	int iVar1;
	
	func_169("Ambience", &(Local_152.f_428), func_108(-1f, -1f), 0);
	func_309();
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (iVar0 != Local_152.f_178 && Local_913[iVar0 /*37*/].f_25)
		{
			func_285(iVar0);
		}
		iVar0++;
	}
	func_281();
	func_273();
	func_266();
	func_261();
	func_241();
	func_237();
	func_231();
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (iVar0 != Local_152.f_178 && Local_913[iVar0 /*37*/].f_25)
		{
			func_224(iVar0);
		}
		iVar0++;
	}
	func_196();
	func_171();
	func_195();
	if (Local_152.f_434 != Local_152.f_433)
	{
		if (Local_152.f_434 == Local_152.f_178)
		{
			func_133("Frontend_Player_Loses_Lead");
		}
		else if (Local_152.f_433 == Local_152.f_178)
		{
			func_133("Frontend_Player_Takes_Lead");
		}
	}
	if (Local_605.f_162 && !func_97(&(Local_152.f_316)))
	{
		func_18(func_19(3));
		func_95(&(Local_152.f_316), 0, 0);
	}
	if (Local_605.f_145 <= 4)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= 2)
	{
		if (Local_152.f_281[iVar1 /*7*/].f_5 != -1)
		{
			func_170(&(Local_152.f_281[iVar1 /*7*/].f_5));
		}
		iVar1++;
	}
	func_16();
	Local_130.f_20 = (Local_130.f_20 + iLocal_806[Local_811[Local_152.f_178 /*9*/].f_6]);
	Local_152.f_415 = 0;
	Local_811[Local_152.f_178 /*9*/].f_8 = (Local_811[Local_152.f_178 /*9*/].f_8 + iLocal_806[Local_811[Local_152.f_178 /*9*/].f_6]);
	func_15(8);
	func_18(func_19(2));
}

void func_195()
{
	bool bVar0;
	
	bVar0 = true;
	if (Local_605.f_145 != 4)
	{
		bVar0 = false;
	}
	if (func_68(Local_152.f_178))
	{
		bVar0 = false;
	}
	if (iLocal_806[Local_811[Local_152.f_178 /*9*/].f_6] > 0)
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		if (Local_152.f_430 == -1)
		{
			Local_152.f_430 = AUDIO::GET_SOUND_ID();
		}
		if (AUDIO::HAS_SOUND_FINISHED(Local_152.f_430))
		{
			AUDIO::PLAY_SOUND_FRONTEND(Local_152.f_430, "Frontend_Player_No_Territory_Loop", "dlc_vw_am_tw_frontend_sounds", false);
		}
	}
	else if (Local_152.f_430 != -1 && !AUDIO::HAS_SOUND_FINISHED(Local_152.f_430))
	{
		AUDIO::STOP_SOUND(Local_152.f_430);
		AUDIO::RELEASE_SOUND_ID(Local_152.f_430);
		Local_152.f_430 = -1;
	}
}

void func_196()
{
	func_124();
	func_188();
	func_182();
	func_222();
	func_220();
	func_214();
	func_207();
	func_206();
	func_202();
	func_200();
	func_199();
	func_198();
	func_197();
	func_175();
	func_104();
	func_103();
}

void func_197()
{
	struct<2> Var0;
	
	if (!Local_605.f_162)
	{
		return;
	}
	if (!func_97(&(Local_152.f_316)))
	{
		return;
	}
	if (func_93(&(Local_152.f_316), 2250, 0))
	{
		return;
	}
	Var0 = { func_108(0.5f, (0.5f + -0.005f)) };
	func_123("MPArcadeCabinetGridHUD", "TEXT_SUDDEN", Var0.f_0, Var0.f_1, 0.2666667f, 0.1481481f, 0f, Local_152.f_107.f_17);
	func_123("MPArcadeCabinetGridHUD", "TEXT_DEATH", Var0.f_0, (Var0.f_1 + 0.07407407f), 0.2666667f, 0.1148148f, 0f, Local_152.f_107.f_17);
}

void func_198()
{
	int iVar0;
	float fVar1;
	struct<8> Var2;
	
	if (Local_605.f_146 == -2147483647)
	{
		return;
	}
	iVar0 = (Local_605.f_146 - NETWORK::GET_NETWORK_TIME());
	if (iVar0 < -1500)
	{
		return;
	}
	if (iVar0 <= 0)
	{
		if (!BitTest(Local_152.f_429, 4))
		{
			func_133("Frontend_GO");
			MISC::SET_BIT(&(Local_152.f_429), 4);
		}
		fVar1 = (SYSTEM::TO_FLOAT(iVar0) / (SYSTEM::TO_FLOAT(-1500) / 3.5f));
		func_181(Local_152.f_107.f_25, SYSTEM::ROUND(func_140(153f, 0f, fVar1, 1)));
		func_123("MPArcadeCabinetGridHUD", "text_fight", 0.5f, (0.5f + -0.005f), 0.2666667f, 0.1481481f, 0f, Local_152.f_107.f_17);
		return;
	}
	func_181(Local_152.f_107.f_25, 153);
	if (iVar0 <= 1000)
	{
		if (!BitTest(Local_152.f_429, 3))
		{
			func_133("Frontend_3_2_1");
			MISC::SET_BIT(&(Local_152.f_429), 3);
		}
		func_123("MPArcadeCabinetGridHUD", "text_1", 0.5f, (0.5f + -0.005f), 0.06666667f, 0.1481481f, 0f, Local_152.f_107.f_17);
		return;
	}
	if (iVar0 <= 2000)
	{
		if (!BitTest(Local_152.f_429, 2))
		{
			func_133("Frontend_3_2_1");
			MISC::SET_BIT(&(Local_152.f_429), 2);
		}
		func_123("MPArcadeCabinetGridHUD", "text_2", 0.5f, (0.5f + -0.005f), 0.06666667f, 0.1481481f, 0f, Local_152.f_107.f_17);
		return;
	}
	if (iVar0 <= 3000)
	{
		if (!BitTest(Local_152.f_429, 1))
		{
			func_133("Frontend_3_2_1");
			MISC::SET_BIT(&(Local_152.f_429), true);
		}
		func_123("MPArcadeCabinetGridHUD", "text_3", 0.5f, (0.5f + -0.005f), 0.06666667f, 0.1481481f, 0f, Local_152.f_107.f_17);
		return;
	}
	if (iVar0 <= 4500)
	{
		if (!BitTest(Local_152.f_429, 0))
		{
			func_133("Frontend_3_2_1");
			MISC::SET_BIT(&(Local_152.f_429), false);
		}
		StringCopy(&Var2, "text_round_", 64);
		StringIntConCat(&Var2, Local_605.f_137 + 1, 64);
		func_123("MPArcadeCabinetGridHUD", &Var2, 0.5f, (0.5f + -0.005f), 0.3125f, 0.1481481f, 0f, Local_152.f_107.f_17);
		return;
	}
}

void func_199()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	bVar0 = false;
	if (Local_811[Local_152.f_178 /*9*/].f_3 + 1000 > NETWORK::GET_NETWORK_TIME())
	{
		bVar0 = true;
	}
	if (func_68(Local_152.f_178))
	{
		iVar1 = (NETWORK::GET_NETWORK_TIME() - Local_811[Local_152.f_178 /*9*/].f_3);
		if (iVar1 < 2500 || Local_811[Local_152.f_178 /*9*/] == 4)
		{
			bVar0 = true;
		}
	}
	if (!bVar0)
	{
		return;
	}
	fVar3 = (0.237037f / 2f);
	iVar2 = 0;
	while (iVar2 <= 3)
	{
		func_123("MPArcadeCabinetGrid", "damage_v", 0.176f, fVar3, 0.03333333f, 0.237037f, 180f, Local_152.f_107.f_29);
		func_123("MPArcadeCabinetGrid", "damage_v", (1f - 0.173f), fVar3, 0.03333333f, 0.237037f, 0f, Local_152.f_107.f_29);
		fVar3 = (fVar3 + 0.237037f);
		iVar2++;
	}
	fVar4 = (0.1333333f / 2f);
	iVar2 = 0;
	while (iVar2 <= 6)
	{
		func_123("MPArcadeCabinetGrid", "damage_h", fVar4, 0.154f, 0.1333333f, 0.05925926f, 0f, Local_152.f_107.f_29);
		func_123("MPArcadeCabinetGrid", "damage_h", fVar4, (1f - 0.09f), 0.1333333f, 0.05925926f, 180f, Local_152.f_107.f_29);
		fVar4 = (fVar4 + 0.1333333f);
		iVar2++;
	}
}

void func_200()
{
	int iVar0;
	int iVar1;
	
	if (func_68(Local_152.f_178))
	{
		if (BitTest(Local_152.f_429, 8))
		{
			MISC::CLEAR_BIT(&(Local_152.f_429), 8);
		}
		iVar0 = (NETWORK::GET_NETWORK_TIME() - Local_811[Local_152.f_178 /*9*/].f_3);
		if (iVar0 < 2500 || Local_811[Local_152.f_178 /*9*/] == 4)
		{
			func_201();
			if (!BitTest(Local_152.f_429, 7))
			{
				MISC::SET_BIT(&(Local_152.f_429), 7);
				func_133("Frontend_Wasted");
			}
			return;
		}
		if (iVar0 < 3500)
		{
			if (!BitTest(Local_152.f_429, 6))
			{
				MISC::SET_BIT(&(Local_152.f_429), 6);
				func_133("Frontend_Text_Appear_Generic");
			}
			func_181(Local_152.f_107.f_25, 153);
			func_123("MPArcadeCabinetGridHUD", "text_ready", 0.5f, (0.5f + -0.005f), 0.3125f, 0.1481481f, 0f, Local_152.f_107.f_17);
		}
	}
	else
	{
		if (BitTest(Local_152.f_429, 7))
		{
			MISC::CLEAR_BIT(&(Local_152.f_429), 7);
		}
		if (BitTest(Local_152.f_429, 6))
		{
			MISC::CLEAR_BIT(&(Local_152.f_429), 6);
		}
	}
	if (Local_811[Local_152.f_178 /*9*/].f_4 == -2147483647)
	{
		return;
	}
	iVar1 = (NETWORK::GET_NETWORK_TIME() - Local_811[Local_152.f_178 /*9*/].f_4);
	if (iVar1 < 1000)
	{
		if (!BitTest(Local_152.f_429, 8))
		{
			MISC::SET_BIT(&(Local_152.f_429), 8);
			func_133("Frontend_GO");
		}
		func_123("MPArcadeCabinetGridHUD", "text_fight", 0.5f, (0.5f + -0.005f), 0.2666667f, 0.1481481f, 0f, Local_152.f_107.f_17);
	}
}

void func_201()
{
	func_181(Local_152.f_107.f_29, 102);
	func_123("MPArcadeCabinetGridHUD", "text_wasted", 0.5f, (0.5f + -0.005f), 0.3125f, 0.1481481f, 0f, Local_152.f_107.f_29);
}

void func_202()
{
	struct<2> Var0;
	
	Var0 = { func_205(Local_152.f_438) };
	if (func_204(Local_152.f_439, Var0))
	{
		return;
	}
	func_123("MPArcadeCabinetGrid", func_203(Local_152.f_438), Local_152.f_439, Local_152.f_439.f_1, Var0.f_0, Var0.f_1, 0f, Local_152.f_107.f_17);
}

char* func_203(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BIRDS";
		
		case 1:
			return "AIRPLANE";
		
		case 2:
			return "HELICOPTER";
		
		default:
	}
	return "";
}

int func_204(struct<2> Param0, struct<2> Param2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = (Param0.f_0 - (Param2.f_0 / 2f));
	if (fVar0 > (1f - 0.15625f))
	{
		return 1;
	}
	fVar1 = (Param0.f_0 + (Param2.f_0 / 2f));
	if (fVar1 < 0.15625f)
	{
		return 1;
	}
	fVar2 = (Param0.f_1 - (Param2.f_1 / 2f));
	if (fVar2 > (1f - 0.06944444f))
	{
		return 1;
	}
	fVar3 = (Param0.f_1 + (Param2.f_1 / 2f));
	if (fVar3 < (0f + 0.06944444f))
	{
		return 1;
	}
	return 0;
}

struct<2> func_205(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_108(0.03333333f, 0.05925926f);
		
		case 1:
			return func_108(0.1145833f, 0.2037037f);
		
		case 2:
			return func_108(0.1145833f, 0.2037037f);
		
		default:
	}
	return func_108(0f, 0f);
}

void func_206()
{
	int iVar0;
	struct<8> Var1;
	struct<2> Var17;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Local_152.f_159[iVar0 /*3*/] <= -1)
		{
		}
		else
		{
			StringCopy(&Var1, "fire_ball", 64);
			StringIntConCat(&Var1, Local_152.f_159[iVar0 /*3*/] + 1, 64);
			Var17 = { func_108((0.066667f / 2f), (0.118519f / 2f)) };
			func_123("MPArcadeCabinetGrid", &Var1, Local_152.f_159[iVar0 /*3*/].f_1, Local_152.f_159[iVar0 /*3*/].f_1.f_1, Var17.f_0, Var17.f_1, 0f, Local_152.f_107.f_17);
			Local_152.f_159[iVar0 /*3*/] = (Local_152.f_159[iVar0 /*3*/] + Local_152.f_412);
			if (Local_152.f_159[iVar0 /*3*/] >= 9)
			{
				Local_152.f_159[iVar0 /*3*/] = -1;
			}
		}
		iVar0++;
	}
}

void func_207()
{
	int iVar0;
	int iVar1;
	float fVar2;
	struct<8> Var3;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (Local_605.f_148[iVar0 /*4*/].f_3 == -1)
		{
		}
		else if (NETWORK::GET_NETWORK_TIME() < Local_605.f_148[iVar0 /*4*/])
		{
			func_210(iVar0);
		}
		else
		{
			iVar1 = func_209(Local_605.f_148[iVar0 /*4*/].f_2);
			if (NETWORK::GET_NETWORK_TIME() > (Local_605.f_148[iVar0 /*4*/] + iVar1))
			{
			}
			else
			{
				if (NETWORK::GET_NETWORK_TIME() < (Local_605.f_148[iVar0 /*4*/] + (iVar1 / 2)) && func_204(func_108(Local_152.f_281[iVar0 /*7*/], Local_152.f_281[iVar0 /*7*/].f_1), func_108(Local_152.f_22[Local_605.f_148[iVar0 /*4*/].f_3 /*4*/].f_2, Local_152.f_22[Local_605.f_148[iVar0 /*4*/].f_3 /*4*/].f_2.f_1)))
				{
					func_210(iVar0);
				}
				fVar2 = func_208(Local_605.f_148[iVar0 /*4*/].f_2);
				Local_152.f_281[iVar0 /*7*/].f_4 = (Local_152.f_281[iVar0 /*7*/].f_4 + Local_152.f_414);
				if (Local_152.f_281[iVar0 /*7*/].f_4 >= Local_152.f_22[Local_605.f_148[iVar0 /*4*/].f_3 /*4*/].f_1)
				{
					Local_152.f_281[iVar0 /*7*/].f_4 = 0;
				}
				StringCopy(&Var3, "", 64);
				StringConCat(&Var3, Local_152.f_22[Local_605.f_148[iVar0 /*4*/].f_3 /*4*/], 64);
				if (Local_605.f_148[iVar0 /*4*/].f_3 < 5)
				{
					StringIntConCat(&Var3, Local_152.f_281[iVar0 /*7*/].f_4 + 1, 64);
				}
				func_123("MPArcadeCabinetGrid", &Var3, Local_152.f_281[iVar0 /*7*/], Local_152.f_281[iVar0 /*7*/].f_1, Local_152.f_22[Local_605.f_148[iVar0 /*4*/].f_3 /*4*/].f_2, Local_152.f_22[Local_605.f_148[iVar0 /*4*/].f_3 /*4*/].f_2.f_1, fVar2, Local_152.f_107.f_17);
			}
		}
		iVar0++;
	}
}

float func_208(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 90f;
		
		case 1:
			return 270f;
		
		case 2:
			return 0f;
		
		case 3:
			return 180f;
		
		default:
	}
	return 0f;
}

var func_209(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
		case 1:
			iVar0 = 11;
			break;
		
		case 2:
		case 3:
			iVar0 = 15;
			break;
	}
	return iVar0 * 650;
}

void func_210(int iParam0)
{
	bool bVar0;
	bool bVar1;
	struct<2> Var2;
	
	func_184(Local_605.f_148[iParam0 /*4*/].f_1, &bVar0, &bVar1);
	if (Local_605.f_148[iParam0 /*4*/].f_2 == 1)
	{
		Var2 = { func_187(func_71(bVar0, 0)) };
		func_123("MPArcadeCabinetGridHUD", "vehicle_alert", Var2.f_0, (Var2.f_1 + -0.011f), 0.02083333f, 0.01851852f, 180f, func_212(Local_605.f_148[iParam0 /*4*/].f_3));
	}
	else if (Local_605.f_148[iParam0 /*4*/].f_2 == 0)
	{
		Var2 = { func_187(func_71(bVar0, 8)) };
		func_123("MPArcadeCabinetGridHUD", "vehicle_alert", Var2.f_0, (Var2.f_1 + 0.023f), 0.02083333f, 0.01851852f, 0f, func_212(Local_605.f_148[iParam0 /*4*/].f_3));
	}
	else if (Local_605.f_148[iParam0 /*4*/].f_2 == 3)
	{
		Var2 = { func_187(func_71(0, bVar1)) };
		func_123("MPArcadeCabinetGridHUD", "vehicle_alert", (Var2.f_0 + func_211(bVar1, 1)), Var2.f_1, 0.02083333f, 0.01851852f, 90f, func_212(Local_605.f_148[iParam0 /*4*/].f_3));
	}
	else if (Local_605.f_148[iParam0 /*4*/].f_2 == 2)
	{
		Var2 = { func_187(func_71(12, bVar1)) };
		func_123("MPArcadeCabinetGridHUD", "vehicle_alert", (Var2.f_0 + func_211(bVar1, 0)), Var2.f_1, 0.02083333f, 0.01851852f, -90f, func_212(Local_605.f_148[iParam0 /*4*/].f_3));
	}
}

float func_211(bool bParam0, bool bParam1)
{
	switch (bParam0)
	{
		case 0:
			if (bParam1)
			{
				return -0.011f;
			}
			return 0.00975f;
		
		case 2:
			if (bParam1)
			{
				return -0.02275f;
			}
			return 0.02275f;
		
		case 4:
			if (bParam1)
			{
				return -0.02375f;
			}
			return 0.02275f;
		
		case 6:
			if (bParam1)
			{
				return -0.01975f;
			}
			return 0.018f;
		
		case 8:
			if (bParam1)
			{
				return -0.006f;
			}
			return 0.004f;
		
		default:
	}
	return 0f;
}

struct<4> func_212(int iParam0)
{
	float fVar0;
	struct<4> Var1;
	
	fVar0 = SYSTEM::SIN((IntToFloat(MISC::GET_GAME_TIMER()) * 0.5f));
	Var1 = { Local_152.f_107.f_17 };
	switch (iParam0)
	{
		case 0:
		case 4:
			break;
		
		case 1:
		case 2:
		case 3:
			if (fVar0 > 0f)
			{
				func_213(&Var1, 255, 0, 0, 255);
			}
			else
			{
				func_213(&Var1, 0, 0, 255, 255);
			}
			break;
		
		case 5:
			Var1 = { Local_152.f_107[0 /*4*/] };
			break;
		
		case 6:
			Var1 = { Local_152.f_107[1 /*4*/] };
			break;
		
		case 7:
			Var1 = { Local_152.f_107[2 /*4*/] };
			break;
		
		case 8:
			Var1 = { Local_152.f_107[3 /*4*/] };
			break;
	}
	Var1.f_3 = (55 + SYSTEM::ROUND((MISC::ABSF(fVar0) * 200f)));
	return Var1;
}

void func_213(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
}

void func_214()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (iVar0 == Local_152.f_178)
		{
		}
		else if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && !Local_913[iVar0 /*37*/].f_25)
		{
		}
		else if (Local_811[iVar0 /*9*/].f_6 == -1)
		{
		}
		else
		{
			func_215(iVar0);
		}
		iVar0++;
	}
	func_215(Local_152.f_178);
}

void func_215(int iParam0)
{
	struct<8> Var0;
	char cVar16[64];
	struct<4> Var32;
	float fVar36;
	float fVar37;
	char cVar38[64];
	int iVar54;
	struct<2> Var55;
	struct<8> Var57;
	struct<2> Var73;
	
	StringCopy(&Var0, "MPArcadeCabinetGridPlayer", 64);
	StringConCat(&Var0, Local_152.f_422[Local_811[iParam0 /*9*/].f_6], 64);
	if (func_68(iParam0))
	{
		StringCopy(&cVar16, "dead_", 64);
		StringConCat(&cVar16, Local_152.f_422[Local_811[iParam0 /*9*/].f_6], 64);
		func_123(&Var0, &cVar16, Local_152.f_204[iParam0 /*19*/], Local_152.f_204[iParam0 /*19*/].f_1, 0.033333f, 0.059259f, 0f, Local_152.f_107.f_17);
		return;
	}
	Var32 = { Local_152.f_107.f_17 };
	if (Local_848[iParam0 /*16*/].f_2 + func_183(iParam0)) > NETWORK::GET_NETWORK_TIME()
	{
		if (Local_152.f_204[iParam0 /*19*/].f_4 == 0)
		{
			func_164("Footsteps", iParam0, &(Local_152.f_204[iParam0 /*19*/].f_7));
		}
		Local_152.f_204[iParam0 /*19*/].f_4 = (Local_152.f_204[iParam0 /*19*/].f_4 + Local_152.f_412);
		if (Local_152.f_204[iParam0 /*19*/].f_4 >= 12)
		{
			Local_152.f_204[iParam0 /*19*/].f_4 = 0;
		}
	}
	if (Local_811[iParam0 /*9*/].f_3 + 1000 > NETWORK::GET_NETWORK_TIME())
	{
		fVar36 = MISC::ABSF(SYSTEM::SIN((SYSTEM::TO_FLOAT((Local_811[iParam0 /*9*/].f_3 + 1000 - NETWORK::GET_NETWORK_TIME())) * 0.35f)));
		Var32.f_3 = (255 - SYSTEM::ROUND(fVar36) * 150);
	}
	fVar37 = func_219(Local_848[iParam0 /*16*/].f_4);
	StringCopy(&cVar38, "walk_", 64);
	StringConCat(&cVar38, Local_152.f_422[Local_811[iParam0 /*9*/].f_6], 64);
	StringConCat(&cVar38, "_", 64);
	StringConCat(&cVar38, Local_152.f_59[Local_811[iParam0 /*9*/].f_5 /*5*/], 64);
	StringIntConCat(&cVar38, Local_152.f_204[iParam0 /*19*/].f_4 + 1, 64);
	if (Local_811[iParam0 /*9*/].f_1 < 1f && Local_152.f_204[iParam0 /*19*/].f_4 > 0)
	{
		iVar54 = Var32.f_3;
		Var32.f_3 = (iVar54 / 2);
		Var55 = { Local_152.f_204[iParam0 /*19*/] };
		if (func_73())
		{
			Var55 = { func_186(Var55, func_108((0.002604167f * SYSTEM::SIN(SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()))), (0.00462963f * SYSTEM::COS(SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()))))) };
		}
		else
		{
			Var55 = { func_186(Var55, func_108((0.002604167f * SYSTEM::COS(SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()))), (0.00462963f * SYSTEM::SIN(SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()))))) };
		}
		func_123(&Var0, &cVar38, Var55.f_0, Var55.f_1, 0.033333f, 0.059259f, fVar37, Var32);
		Var32.f_3 = iVar54;
	}
	func_123(&Var0, &cVar38, Local_152.f_204[iParam0 /*19*/], Local_152.f_204[iParam0 /*19*/].f_1, 0.033333f, 0.059259f, fVar37, Var32);
	if (Local_152.f_204[iParam0 /*19*/].f_5 > -1)
	{
		StringCopy(&Var57, "muzzle_flare_", 64);
		StringIntConCat(&Var57, Local_152.f_204[iParam0 /*19*/].f_5 + 1, 64);
		Var73 = { func_216(iParam0, fVar37) };
		func_123("MPArcadeCabinetGrid", &Var57, Var73.f_0, Var73.f_1, 0.01666667f, 0.02962963f, fVar37, Var32);
		Local_152.f_204[iParam0 /*19*/].f_5 = (Local_152.f_204[iParam0 /*19*/].f_5 + Local_152.f_412);
		if (Local_152.f_204[iParam0 /*19*/].f_5 >= 3)
		{
			Local_152.f_204[iParam0 /*19*/].f_5 = -1;
		}
	}
}

struct<2> func_216(int iParam0, float fParam1)
{
	struct<2> Var0;
	
	Var0 = { func_218(Local_152.f_204[iParam0 /*19*/]) };
	switch (Local_811[iParam0 /*9*/].f_5)
	{
		case 1:
		case 2:
			Var0 = { func_186(Var0, func_108(7f, -36f)) };
			break;
		
		case 3:
		case 4:
		case 5:
			Var0 = { func_186(Var0, func_108(5f, -40f)) };
			break;
	}
	Var0 = { func_217(func_218(Local_152.f_204[iParam0 /*19*/]), Var0, fParam1) };
	Var0 = { func_107(Var0) };
	return Var0;
}

struct<2> func_217(struct<2> Param0, struct<2> Param2, float fParam4)
{
	struct<2> Var0;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	
	fVar2 = SYSTEM::SIN(fParam4);
	fVar3 = SYSTEM::COS(fParam4);
	Var0.f_0 = (Param2.f_0 - Param0.f_0);
	Var0.f_1 = (Param2.f_1 - Param0.f_1);
	fVar4 = ((Var0.f_0 * fVar3) - (Var0.f_1 * fVar2));
	fVar5 = ((Var0.f_0 * fVar2) + (Var0.f_1 * fVar3));
	Var0.f_0 = (fVar4 + Param0.f_0);
	Var0.f_1 = (fVar5 + Param0.f_1);
	return Var0;
}

struct<2> func_218(struct<2> Param0)
{
	return func_108((Param0.f_0 * 1920f), (Param0.f_1 * 1080f));
}

float func_219(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0f;
		
		case 1:
			return 180f;
		
		case 2:
			return 270f;
		
		case 3:
			return 90f;
		
		default:
	}
	return 0f;
}

void func_220()
{
	float fVar0;
	struct<2> Var1;
	bool bVar3;
	var uVar4;
	bool bVar5;
	struct<2> Var6;
	struct<8> Var8;
	struct<4> Var24;
	
	fVar0 = MISC::ABSF(SYSTEM::SIN((SYSTEM::TO_FLOAT(NETWORK::GET_NETWORK_TIME()) * 0.2f)));
	bVar5 = false;
	bVar3 = false;
	while (bVar3 <= 6)
	{
		if (Local_605.f_62[bVar3 /*3*/].f_1 == -1)
		{
		}
		else if (BitTest(Local_152.f_309, bVar3))
		{
		}
		else
		{
			Var6 = { func_187(Local_605.f_62[bVar3 /*3*/]) };
			MISC::SET_BIT(&uVar4, bVar3);
			if (!BitTest(Local_152.f_310, bVar3) && !bVar5)
			{
				func_221("Pickup_Spawn", Var6, 1);
				bVar5 = true;
			}
			StringCopy(&Var8, Local_152.f_90[Local_605.f_62[bVar3 /*3*/].f_1 /*2*/], 64);
			if (Local_152.f_90[Local_605.f_62[bVar3 /*3*/].f_1 /*2*/].f_1 > 0)
			{
				StringIntConCat(&Var8, (Local_152.f_311 % Local_152.f_90[Local_605.f_62[bVar3 /*3*/].f_1 /*2*/].f_1) + 1, 64);
			}
			Var1 = { func_108(0.033333f, 0.059259f) };
			if (!((Local_605.f_62[bVar3 /*3*/].f_1 == 0 || Local_605.f_62[bVar3 /*3*/].f_1 == 2) || Local_605.f_62[bVar3 /*3*/].f_1 == 1))
			{
				Var1.f_0 = (Var1.f_0 - ((Var1.f_0 * 0.15f) * fVar0));
				Var1.f_1 = (Var1.f_1 - ((Var1.f_1 * 0.15f) * fVar0));
			}
			Var24 = { Local_152.f_107.f_17 };
			if ((NETWORK::GET_NETWORK_TIME() - Local_605.f_62[bVar3 /*3*/].f_2) < 1250)
			{
				Var24.f_3 = SYSTEM::ROUND((fVar0 * 255f));
			}
			else if ((NETWORK::GET_NETWORK_TIME() - Local_605.f_62[bVar3 /*3*/].f_2) > 16500)
			{
				Var24.f_3 = SYSTEM::ROUND((func_140(1f, 0.1f, (SYSTEM::TO_FLOAT(((NETWORK::GET_NETWORK_TIME() - Local_605.f_62[bVar3 /*3*/].f_2) - 16500)) / 1000f), 4) * 255f));
			}
			func_123("MPArcadeCabinetGrid", &Var8, Var6.f_0, Var6.f_1, Var1.f_0, Var1.f_1, 0f, Var24);
		}
		bVar3++;
	}
	Local_152.f_310 = uVar4;
}

void func_221(char* sParam0, struct<2> Param1, bool bParam3)
{
	float fVar0;
	int iVar1;
	
	fVar0 = func_166(Param1);
	if (bParam3)
	{
	}
	iVar1 = AUDIO::GET_SOUND_ID();
	AUDIO::PLAY_SOUND_FRONTEND(iVar1, sParam0, "dlc_vw_am_tw_global_sounds", false);
	if (bParam3)
	{
		AUDIO::SET_VARIABLE_ON_SOUND(iVar1, "Screen_Position", fVar0);
	}
	AUDIO::RELEASE_SOUND_ID(iVar1);
}

void func_222()
{
	int iVar0;
	int iVar1;
	float fVar2;
	struct<8> Var3;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && !Local_913[iVar0 /*37*/].f_25)
		{
		}
		else if (Local_811[iVar0 /*9*/].f_6 == -1)
		{
		}
		else
		{
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 <= 1)
			{
				if (Local_848[iVar0 /*16*/].f_5[iVar1 /*5*/] == -2147483647)
				{
				}
				else if (BitTest(Local_152.f_303, func_223(iVar0, iVar1)))
				{
				}
				else
				{
					fVar2 = func_219(Local_848[iVar0 /*16*/].f_5[iVar1 /*5*/].f_3);
					if (Local_848[iVar0 /*16*/].f_5[iVar1 /*5*/].f_4 == 4)
					{
						StringCopy(&Var3, "rocket_trail_", 64);
						StringIntConCat(&Var3, Local_152.f_416 + 1, 64);
						func_123("MPArcadeCabinetGrid", &Var3, Local_152.f_204[iVar0 /*19*/].f_10[iVar1 /*4*/], Local_152.f_204[iVar0 /*19*/].f_10[iVar1 /*4*/].f_1, 0.004166667f, 0.03333333f, fVar2, Local_152.f_107.f_17);
					}
					else
					{
						func_123("MPArcadeCabinetGrid", "bullet", Local_152.f_204[iVar0 /*19*/].f_10[iVar1 /*4*/], Local_152.f_204[iVar0 /*19*/].f_10[iVar1 /*4*/].f_1, 0.004166667f, 0.01111111f, fVar2, Local_152.f_107.f_17);
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

int func_223(int iParam0, int iParam1)
{
	return (iParam1 + (2 * iParam0));
}

void func_224(int iParam0)
{
	if (iLocal_806[Local_913[iParam0 /*37*/].f_6] == 0 && (NETWORK::GET_NETWORK_TIME() - Local_605.f_146) > 3000)
	{
		if ((BitTest(Local_152.f_417, 1) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !BitTest(Local_152.f_417, 3))
		{
		}
	}
	if (Local_913[iParam0 /*37*/] != 3)
	{
		return;
	}
	if (Local_605.f_162)
	{
		func_230(iParam0, 4);
	}
	if (func_229(iParam0))
	{
		if (NETWORK::GET_NETWORK_TIME() >= Local_913[iParam0 /*37*/].f_3 + 2500 && !BitTest(Local_152.f_142[iParam0], 6))
		{
			MISC::SET_BIT(&(Local_152.f_142[iParam0]), 6);
		}
		if (NETWORK::GET_NETWORK_TIME() >= Local_913[iParam0 /*37*/].f_3 + 3500)
		{
			func_226(iParam0);
		}
	}
	else if (NETWORK::GET_NETWORK_TIME() > Local_913[iParam0 /*37*/].f_3 + 1000 && !BitTest(Local_152.f_142[iParam0], 6))
	{
		func_230(iParam0, 4);
		func_225("Death_Dead");
	}
}

void func_225(char* sParam0)
{
	if (Local_152.f_178.f_4 == -1)
	{
		Local_152.f_178.f_4 = AUDIO::GET_SOUND_ID();
	}
	AUDIO::PLAY_SOUND_FRONTEND(Local_152.f_178.f_4, sParam0, "dlc_vw_am_tw_global_sounds", false);
}

void func_226(int iParam0)
{
	func_227(iParam0);
	func_230(iParam0, 2);
	func_225("Death_Resurrect");
	Local_913[iParam0 /*37*/].f_4 = NETWORK::GET_NETWORK_TIME();
	Local_913[iParam0 /*37*/].f_2 = 8;
	Local_913[iParam0 /*37*/].f_5 = 0;
	Local_913[iParam0 /*37*/].f_1 = 1f;
	Local_152.f_178.f_2 = 0;
	if (BitTest(Local_152.f_142[iParam0], 6))
	{
		MISC::CLEAR_BIT(&(Local_152.f_142[iParam0]), 6);
	}
}

void func_227(int iParam0)
{
	Local_913[iParam0 /*37*/].f_9 = func_228(iParam0);
	Local_913[iParam0 /*37*/].f_9.f_1 = Local_913[iParam0 /*37*/].f_9;
}

int func_228(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	bool bVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	
	iVar0 = -1;
	iVar1 = -1;
	bVar2 = false;
	while (bVar2 <= 3)
	{
		if (bVar2 == iParam0)
		{
		}
		else if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(bVar2)) && !Local_913[bVar2 /*37*/].f_25)
		{
		}
		else if (Local_811[bVar2 /*9*/].f_6 == -1)
		{
		}
		else if (func_68(bVar2))
		{
		}
		else
		{
			func_184(Local_848[bVar2 /*16*/], &bVar8, &bVar9);
			MISC::SET_BIT(&uVar4, bVar8);
			MISC::SET_BIT(&uVar5, bVar9);
		}
		bVar2++;
	}
	bVar2 = false;
	while (bVar2 <= 2)
	{
		if (Local_605.f_148[bVar2 /*4*/].f_3 == -1)
		{
		}
		else
		{
			func_184(Local_605.f_148[bVar2 /*4*/].f_1, &bVar8, &bVar9);
			if (Local_605.f_148[bVar2 /*4*/].f_2 == 0 || Local_605.f_148[bVar2 /*4*/].f_2 == 1)
			{
				MISC::SET_BIT(&uVar6, bVar8);
			}
			else if (Local_605.f_148[bVar2 /*4*/].f_2 == 2 || Local_605.f_148[bVar2 /*4*/].f_2 == 3)
			{
				MISC::SET_BIT(&uVar7, bVar9);
			}
		}
		bVar2++;
	}
	iVar10 = -1;
	iVar11 = 0;
	bVar2 = false;
	while (bVar2 <= 12)
	{
		bVar3 = false;
		while (bVar3 <= 8)
		{
			iVar11 = 100;
			iVar10 = func_71(bVar2, bVar3);
			if (!(func_81(&(Local_605.f_85[Local_913[iParam0 /*37*/].f_6 /*11*/][0 /*5*/]), iVar10) || func_81(&(Local_605.f_85[Local_913[iParam0 /*37*/].f_6 /*11*/][1 /*5*/]), iVar10)))
			{
			}
			else
			{
				if (BitTest(uVar6, bVar2))
				{
					iVar11 = (iVar11 - 25);
				}
				if (BitTest(uVar7, bVar3))
				{
					iVar11 = (iVar11 - 25);
				}
				if (BitTest(uVar4, bVar2))
				{
					iVar11 = (iVar11 - 25);
				}
				if (BitTest(uVar5, bVar3))
				{
					iVar11 = (iVar11 - 25);
				}
				if (iVar11 == 100)
				{
					return iVar10;
				}
				if (iVar11 > iVar1)
				{
					iVar1 = iVar11;
					iVar0 = iVar10;
				}
			}
			bVar3++;
		}
		bVar2++;
	}
	return iVar0;
}

int func_229(int iParam0)
{
	if (BitTest(Local_152.f_142[iParam0], 6))
	{
		return 1;
	}
	if (Local_913[iParam0 /*37*/].f_6 == -1)
	{
		return 0;
	}
	if (iLocal_806[Local_913[iParam0 /*37*/].f_6] == 0)
	{
		return 0;
	}
	return 1;
}

void func_230(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	Local_913[iParam0 /*37*/] = iParam1;
}

void func_231()
{
	if (iLocal_806[Local_811[Local_152.f_178 /*9*/].f_6] == 0 && (NETWORK::GET_NETWORK_TIME() - Local_605.f_146) > 3000)
	{
		if ((BitTest(Local_152.f_417, 1) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !BitTest(Local_152.f_417, 3))
		{
			func_151("SCGW_H_RSPWN", 7500, 0);
			MISC::SET_BIT(&(Local_152.f_417), 3);
		}
	}
	if (Local_811[Local_152.f_178 /*9*/] != 3)
	{
		return;
	}
	func_16();
	if (Local_605.f_162)
	{
		func_236(4);
		func_168(6);
	}
	if (func_235(Local_152.f_178))
	{
		if (NETWORK::GET_NETWORK_TIME() >= Local_811[Local_152.f_178 /*9*/].f_3 + 2500 && !BitTest(Local_152.f_141, 6))
		{
			MISC::SET_BIT(&(Local_152.f_141), 6);
		}
		if (NETWORK::GET_NETWORK_TIME() >= Local_811[Local_152.f_178 /*9*/].f_3 + 3500)
		{
			func_232();
		}
	}
	else if (NETWORK::GET_NETWORK_TIME() > Local_811[Local_152.f_178 /*9*/].f_3 + 1000 && !BitTest(Local_152.f_141, 6))
	{
		func_236(4);
		func_225("Death_Dead");
		func_168(6);
	}
}

void func_232()
{
	func_233();
	func_236(2);
	func_225("Death_Resurrect");
	Local_811[Local_152.f_178 /*9*/].f_4 = NETWORK::GET_NETWORK_TIME();
	Local_811[Local_152.f_178 /*9*/].f_2 = 8;
	Local_811[Local_152.f_178 /*9*/].f_5 = 0;
	Local_811[Local_152.f_178 /*9*/].f_1 = 1f;
	Local_152.f_178.f_2 = 0;
	func_168(4);
	if (BitTest(Local_152.f_141, 6))
	{
		MISC::CLEAR_BIT(&(Local_152.f_141), 6);
	}
}

void func_233()
{
	Local_848[Local_152.f_178 /*16*/] = func_234();
	Local_848[Local_152.f_178 /*16*/].f_1 = Local_848[Local_152.f_178 /*16*/];
}

int func_234()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	bool bVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	
	iVar0 = -1;
	iVar1 = -1;
	bVar2 = false;
	while (bVar2 <= 3)
	{
		if (bVar2 == Local_152.f_178)
		{
		}
		else if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(bVar2)) && !Local_913[bVar2 /*37*/].f_25)
		{
		}
		else if (Local_811[bVar2 /*9*/].f_6 == -1)
		{
		}
		else if (func_68(bVar2))
		{
		}
		else
		{
			func_184(Local_848[bVar2 /*16*/], &bVar8, &bVar9);
			MISC::SET_BIT(&uVar4, bVar8);
			MISC::SET_BIT(&uVar5, bVar9);
		}
		bVar2++;
	}
	bVar2 = false;
	while (bVar2 <= 2)
	{
		if (Local_605.f_148[bVar2 /*4*/].f_3 == -1)
		{
		}
		else
		{
			func_184(Local_605.f_148[bVar2 /*4*/].f_1, &bVar8, &bVar9);
			if (Local_605.f_148[bVar2 /*4*/].f_2 == 0 || Local_605.f_148[bVar2 /*4*/].f_2 == 1)
			{
				MISC::SET_BIT(&uVar6, bVar8);
			}
			else if (Local_605.f_148[bVar2 /*4*/].f_2 == 2 || Local_605.f_148[bVar2 /*4*/].f_2 == 3)
			{
				MISC::SET_BIT(&uVar7, bVar9);
			}
		}
		bVar2++;
	}
	iVar10 = -1;
	iVar11 = 0;
	bVar2 = false;
	while (bVar2 <= 12)
	{
		bVar3 = false;
		while (bVar3 <= 8)
		{
			iVar11 = 100;
			iVar10 = func_71(bVar2, bVar3);
			if (!(func_81(&(Local_605.f_85[Local_811[Local_152.f_178 /*9*/].f_6 /*11*/][0 /*5*/]), iVar10) || func_81(&(Local_605.f_85[Local_811[Local_152.f_178 /*9*/].f_6 /*11*/][1 /*5*/]), iVar10)))
			{
			}
			else
			{
				if (BitTest(uVar6, bVar2))
				{
					iVar11 = (iVar11 - 25);
				}
				if (BitTest(uVar7, bVar3))
				{
					iVar11 = (iVar11 - 25);
				}
				if (BitTest(uVar4, bVar2))
				{
					iVar11 = (iVar11 - 25);
				}
				if (BitTest(uVar5, bVar3))
				{
					iVar11 = (iVar11 - 25);
				}
				if (iVar11 == 100)
				{
					return iVar10;
				}
				if (iVar11 > iVar1)
				{
					iVar1 = iVar11;
					iVar0 = iVar10;
				}
			}
			bVar3++;
		}
		bVar2++;
	}
	return iVar0;
}

int func_235(int iParam0)
{
	if (BitTest(Local_152.f_141, 6))
	{
		return 1;
	}
	if (Local_811[iParam0 /*9*/].f_6 == -1)
	{
		return 0;
	}
	if (iLocal_806[Local_811[iParam0 /*9*/].f_6] == 0)
	{
		return 0;
	}
	return 1;
}

void func_236(int iParam0)
{
	if (Local_152.f_178 == -1)
	{
		return;
	}
	Local_811[Local_152.f_178 /*9*/] = iParam0;
}

void func_237()
{
	int iVar0;
	
	if (Local_152.f_437 == -2147483647)
	{
		Local_152.f_437 = NETWORK::GET_NETWORK_TIME();
	}
	if ((NETWORK::GET_NETWORK_TIME() - Local_152.f_437) > 22500)
	{
		Local_152.f_437 = NETWORK::GET_NETWORK_TIME();
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		if (iVar0 == Local_152.f_438)
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		}
		Local_152.f_438 = iVar0;
		func_240();
	}
	Local_152.f_439 = (Local_152.f_439 + (func_239() * SYSTEM::TIMESTEP()));
	Local_152.f_439.f_1 = (Local_152.f_439.f_1 + (func_238() * SYSTEM::TIMESTEP()));
}

float func_238()
{
	switch (Local_152.f_438)
	{
		case 0:
			return -0.1111111f;
		
		case 1:
			return -0.1111111f;
		
		case 2:
			return -0.1388889f;
		
		default:
	}
	return 0f;
}

float func_239()
{
	switch (Local_152.f_438)
	{
		case 0:
			return -0.0625f;
		
		case 1:
			return -0.0625f;
		
		case 2:
			return 0.078125f;
		
		default:
	}
	return 0f;
}

void func_240()
{
	switch (Local_152.f_438)
	{
		case 0:
		case 1:
			Local_152.f_439 = { func_108((1f + MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.5f, 0f)), (1f + MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 0.5f))) };
			break;
		
		case 2:
			Local_152.f_439 = { func_108((0f + MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 0.5f)), (1f + MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 0.5f))) };
			break;
	}
}

void func_241()
{
	int* iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (!Local_913[iVar1 /*37*/].f_25)
		{
		}
		else if (Local_913[iVar1 /*37*/].f_6 == -1)
		{
		}
		else
		{
			func_242(iVar1, &iVar0);
		}
		iVar1++;
	}
	Local_152.f_306 = iVar0;
}

void func_242(int iParam0, int* iParam1)
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	struct<2> Var6;
	struct<2> Var8;
	int iVar10;
	bool bVar11;
	float fVar12;
	struct<2> Var13;
	float fVar15;
	struct<2> Var16;
	struct<2> Var18;
	int iVar20;
	int iVar21;
	int iVar22;
	
	iVar10 = 0;
	iVar10 = 0;
	while (iVar10 <= 1)
	{
		bVar11 = func_223(iParam0, iVar10);
		if (Local_913[iParam0 /*37*/].f_9.f_5[iVar10 /*5*/] == -2147483647)
		{
			if (BitTest(Local_152.f_304, bVar11))
			{
				MISC::CLEAR_BIT(&(Local_152.f_304), bVar11);
			}
		}
		else
		{
			MISC::SET_BIT(iParam1, bVar11);
			if (!BitTest(Local_152.f_306, bVar11))
			{
				Local_152.f_204[iParam0 /*19*/].f_5 = 0;
				func_259(iParam0, iVar10);
			}
			fVar12 = 0f;
			Var13 = { Local_913[iParam0 /*37*/].f_9.f_5[iVar10 /*5*/].f_1 };
			switch (Local_913[iParam0 /*37*/].f_9.f_5[iVar10 /*5*/].f_3)
			{
				case 0:
					fVar12 = -(IntToFloat(Local_152.f_59[Local_913[iParam0 /*37*/].f_9.f_5[iVar10 /*5*/].f_4 /*5*/].f_2) * 0.185185f);
					Var13.f_1 = (Var13.f_1 + fVar12);
					Var8 = { func_108(0f, 0.01481481f) };
					break;
				
				case 1:
					fVar12 = (IntToFloat(Local_152.f_59[Local_913[iParam0 /*37*/].f_9.f_5[iVar10 /*5*/].f_4 /*5*/].f_2) * 0.185185f);
					Var13.f_1 = (Var13.f_1 + fVar12);
					Var8 = { func_108(0f, -0.01481481f) };
					break;
				
				case 2:
					fVar12 = -(IntToFloat(Local_152.f_59[Local_913[iParam0 /*37*/].f_9.f_5[iVar10 /*5*/].f_4 /*5*/].f_2) * 0.104167f);
					Var13.f_0 = (Var13.f_0 + fVar12);
					Var8 = { func_108(0.008333333f, 0f) };
					break;
				
				case 3:
					fVar12 = (IntToFloat(Local_152.f_59[Local_913[iParam0 /*37*/].f_9.f_5[iVar10 /*5*/].f_4 /*5*/].f_2) * 0.104167f);
					Var13.f_0 = (Var13.f_0 + fVar12);
					Var8 = { func_108(-0.008333333f, 0f) };
					break;
			}
			fVar15 = (SYSTEM::TO_FLOAT((NETWORK::GET_NETWORK_TIME() - Local_913[iParam0 /*37*/].f_9.f_5[iVar10 /*5*/])) / SYSTEM::TO_FLOAT((Local_152.f_59[Local_913[iParam0 /*37*/].f_9.f_5[iVar10 /*5*/].f_4 /*5*/].f_2 * Local_152.f_59[Local_913[iParam0 /*37*/].f_9.f_5[iVar10 /*5*/].f_4 /*5*/].f_1)));
			if (BitTest(Local_152.f_304, bVar11))
			{
				if (fVar15 > 1f)
				{
					Local_152.f_204[iParam0 /*19*/].f_10[iVar10 /*4*/].f_2 = { func_108(-1f, -1f) };
					Local_913[iParam0 /*37*/].f_9.f_5[iVar10 /*5*/] = -2147483647;
					Local_913[iParam0 /*37*/].f_9.f_5[iVar10 /*5*/].f_1 = -1f;
					Local_913[iParam0 /*37*/].f_9.f_5[iVar10 /*5*/].f_1.f_1 = -1f;
					Local_913[iParam0 /*37*/].f_9.f_5[iVar10 /*5*/].f_3 = -1;
					Local_913[iParam0 /*37*/].f_9.f_5[iVar10 /*5*/].f_4 = -1;
				}
			}
			else
			{
				Var16 = { Local_913[iParam0 /*37*/].f_9.f_5[iVar10 /*5*/].f_1 };
				Var18 = { Var13 };
				if (func_258(Local_152.f_204[iParam0 /*19*/].f_10[iVar10 /*4*/].f_2, (-1f - 0.0001f), (-1f + 0.0001f)) && func_258(Local_152.f_204[iParam0 /*19*/].f_10[iVar10 /*4*/].f_2.f_1, (-1f - 0.0001f), (-1f + 0.0001f)))
				{
					Local_152.f_204[iParam0 /*19*/].f_10[iVar10 /*4*/].f_2 = { Var16 };
				}
				else
				{
					Local_152.f_204[iParam0 /*19*/].f_10[iVar10 /*4*/].f_2 = { Local_152.f_204[iParam0 /*19*/].f_10[iVar10 /*4*/] };
				}
				Local_152.f_204[iParam0 /*19*/].f_10[iVar10 /*4*/] = { func_256(Var16, Var18, fVar15) };
				iVar20 = 0;
				iVar21 = 0;
				Var4 = { Local_152.f_204[iParam0 /*19*/].f_10[iVar10 /*4*/] };
				Var6 = { func_186(Local_152.f_204[iParam0 /*19*/].f_10[iVar10 /*4*/].f_2, Var8) };
				iVar20 = 0;
				while (iVar20 <= 3)
				{
					if (iVar20 == iParam0)
					{
					}
					else if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar20)))
					{
					}
					else if (Local_811[bVar20 /*9*/].f_6 == -1)
					{
					}
					else if (func_68(bVar20))
					{
					}
					else
					{
						Var0 = { Local_152.f_204[bVar20 /*19*/] };
						Var2 = { Local_152.f_204[bVar20 /*19*/].f_2 };
						if (MISC::ABSF((Var0.f_0 - Var4.f_0)) > 0.104167f || MISC::ABSF((Var0.f_1 - Var4.f_1)) > 0.185185f)
						{
						}
						else if (func_251(Var4, Var6, Var0, Var2))
						{
							func_249(iVar10, bVar20, iParam0);
							iVar21 = 1;
						}
					}
					bVar20++;
				}
				iVar22 = 0;
				iVar22 = 0;
				while (iVar22 <= 3)
				{
					if (iVar22 == iParam0)
					{
					}
					else if (!Local_913[iVar22 /*37*/].f_25)
					{
					}
					else if (Local_913[iVar22 /*37*/].f_6 == -1)
					{
					}
					else if (func_248(iVar22))
					{
					}
					else
					{
						Var0 = { Local_152.f_204[iVar22 /*19*/] };
						Var2 = { Local_152.f_204[iVar22 /*19*/].f_2 };
						if (MISC::ABSF((Var0.f_0 - Var4.f_0)) > 0.104167f || MISC::ABSF((Var0.f_1 - Var4.f_1)) > 0.185185f)
						{
						}
						else if (func_251(Var4, Var6, Var0, Var2))
						{
							func_245(iVar10, iVar22, iParam0);
							iVar21 = 1;
						}
					}
					iVar22++;
				}
				if (fVar15 >= 1f || iVar21)
				{
					if (!BitTest(Local_152.f_304, bVar11))
					{
						if (Local_913[iParam0 /*37*/].f_9.f_5[iVar10 /*5*/].f_4 == 4)
						{
							func_243(Local_152.f_204[iParam0 /*19*/].f_10[iVar10 /*4*/]);
						}
						MISC::SET_BIT(&(Local_152.f_304), bVar11);
					}
				}
			}
		}
		iVar10++;
	}
}

void func_243(struct<2> Param0)
{
	Local_152.f_159[Local_152.f_308 /*3*/] = 0;
	Local_152.f_159[Local_152.f_308 /*3*/].f_1 = { Param0 };
	if (func_244(Param0, Local_152.f_204[Local_152.f_178 /*19*/]) < SYSTEM::POW((0.185185f * 2f), 2f))
	{
		PAD::SET_PAD_SHAKE(0, 1000, 100);
	}
	func_221("Rocket_Explode", Param0, 1);
	Local_152.f_308++;
	if (Local_152.f_308 >= 6)
	{
		Local_152.f_308 = 0;
	}
}

float func_244(struct<2> Param0, struct<2> Param2)
{
	return (SYSTEM::POW((Param2.f_0 - Param0.f_0), 2f) + SYSTEM::POW((Param2.f_1 - Param0.f_1), 2f));
}

void func_245(int iParam0, int iParam1, int iParam2)
{
	Local_152.f_204[iParam2 /*19*/].f_10[iParam0 /*4*/] = { Local_152.f_204[iParam1 /*19*/] };
	func_246(iParam1, -Local_152.f_59[Local_913[iParam2 /*37*/].f_9.f_5[iParam0 /*5*/].f_4 /*5*/].f_4, 0);
	PAD::SET_PAD_SHAKE(0, 250, 200);
	Local_913[iParam1 /*37*/].f_3 = NETWORK::GET_NETWORK_TIME();
	if (Local_913[iParam1 /*37*/] != 2)
	{
		func_163((6 + Local_913[iParam2 /*37*/].f_6));
	}
	if (Local_913[iParam1 /*37*/].f_2 <= 0)
	{
		func_163((2 + Local_913[iParam1 /*37*/].f_6));
		Local_130.f_18++;
	}
}

void func_246(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = (Local_913[iParam0 /*37*/].f_2 + iParam1);
	if (iVar0 > 8)
	{
		iVar0 = 8;
	}
	else if (iVar0 <= 0)
	{
		iVar0 = 0;
		if (Local_913[iParam0 /*37*/] == 2)
		{
			func_230(iParam0, 3);
			func_225("Death_Bleeps");
		}
	}
	if (iVar0 != Local_913[iParam0 /*37*/].f_2)
	{
		Local_913[iParam0 /*37*/].f_2 = iVar0;
	}
	if (iParam1 < 0)
	{
		func_247(iParam0, Local_913[iParam0 /*37*/] != 2, iParam2);
	}
}

void func_247(int iParam0, bool bParam1, var uParam2)
{
	struct<5> Var0;
	int iVar5;
	
	Var0.f_0 = -77904037;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	Var0.f_3 = bParam1;
	Var0.f_4 = uParam2;
	iVar5 = func_135(1);
	if (!iVar5 == 0)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 5, iVar5);
	}
}

int func_248(int iParam0)
{
	if (Local_913[iParam0 /*37*/] == 3)
	{
		return 1;
	}
	if (Local_913[iParam0 /*37*/] == 4)
	{
		return 1;
	}
	return 0;
}

void func_249(int iParam0, int iParam1, int iParam2)
{
	Local_152.f_204[iParam2 /*19*/].f_10[iParam0 /*4*/] = { Local_152.f_204[iParam1 /*19*/] };
	if (iParam1 == Local_152.f_178)
	{
		func_250(-Local_152.f_59[Local_913[iParam2 /*37*/].f_9.f_5[iParam0 /*5*/].f_4 /*5*/].f_4, 0);
		PAD::SET_PAD_SHAKE(0, 250, 200);
		Local_811[Local_152.f_178 /*9*/].f_3 = NETWORK::GET_NETWORK_TIME();
		if (Local_811[Local_152.f_178 /*9*/] != 2)
		{
			func_163((6 + Local_913[iParam2 /*37*/].f_6));
		}
	}
	else if (iParam2 == Local_152.f_178 && (Local_811[iParam1 /*9*/].f_2 - Local_152.f_59[Local_913[iParam2 /*37*/].f_9.f_5[iParam0 /*5*/].f_4 /*5*/].f_4) <= 0)
	{
		func_163((2 + Local_811[iParam1 /*9*/].f_6));
		Local_130.f_18++;
	}
}

void func_250(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (Local_811[Local_152.f_178 /*9*/].f_2 + iParam0);
	if (iVar0 > 8)
	{
		iVar0 = 8;
	}
	else if (iVar0 <= 0)
	{
		iVar0 = 0;
		if (Local_811[Local_152.f_178 /*9*/] == 2)
		{
			func_236(3);
			MISC::SET_BIT(&(Local_152.f_141), 2);
			func_225("Death_Bleeps");
			Global_1932185 = 5;
		}
	}
	if (iVar0 != Local_811[Local_152.f_178 /*9*/].f_2)
	{
		Local_811[Local_152.f_178 /*9*/].f_2 = iVar0;
	}
	if (iParam0 < 0)
	{
		func_247(Local_152.f_178, Local_811[Local_152.f_178 /*9*/] != 2, iParam1);
	}
}

int func_251(struct<2> Param0, struct<2> Param2, struct<2> Param4, struct<2> Param6)
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	struct<2> Var6;
	var uVar8;
	
	Var0 = { Param0 };
	Var2 = { Param2 };
	Var4 = { Param4 };
	Var6 = { Param6 };
	func_255(&Param0, &Param2);
	func_255(&Param4, &Param6);
	func_255(&Var2, &Var0);
	func_255(&Var6, &Var4);
	if (((func_252(Param0, Param2, Var4, Var6, &uVar8) || func_252(Param0, Param2, Param4, Param6, &uVar8)) || func_252(Var0, Var2, Param4, Param6, &uVar8)) || func_252(Var0, Var2, Var4, Var6, &uVar8))
	{
		return 1;
	}
	return 0;
}

int func_252(struct<2> Param0, struct<2> Param2, struct<2> Param4, struct<2> Param6, var uParam8)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	struct<2> Var9;
	
	fVar0 = (Param2.f_1 - Param0.f_1);
	fVar1 = (Param0.f_0 - Param2.f_0);
	fVar2 = ((fVar0 * Param0.f_0) + (fVar1 * Param0.f_1));
	fVar3 = (Param6.f_1 - Param4.f_1);
	fVar4 = (Param4.f_0 - Param6.f_0);
	fVar5 = ((fVar3 * Param4.f_0) + (fVar4 * Param4.f_1));
	fVar6 = ((fVar0 * fVar4) - (fVar3 * fVar1));
	if (!func_258(fVar6, (0f - 0.0001f), (0f + 0.0001f)))
	{
		fVar7 = (((fVar4 * fVar2) - (fVar1 * fVar5)) / fVar6);
		fVar8 = (((fVar0 * fVar5) - (fVar3 * fVar2)) / fVar6);
		Var9 = { func_108(fVar7, fVar8) };
		if (((((((func_254((Param0.f_0 - 0.001f), (Param2.f_0 - 0.001f)) <= Var9.f_0 && Var9.f_0 <= func_253((Param0.f_0 + 0.001f), (Param2.f_0 + 0.001f))) && func_254((Param0.f_1 - 0.001f), (Param2.f_1 - 0.001f)) <= Var9.f_1) && Var9.f_1 <= func_253((Param0.f_1 + 0.001f), (Param2.f_1 + 0.001f))) && func_254((Param4.f_0 - 0.001f), (Param6.f_0 - 0.001f)) <= Var9.f_0) && Var9.f_0 <= func_253((Param4.f_0 + 0.001f), (Param6.f_0 + 0.001f))) && func_254((Param4.f_1 - 0.001f), (Param6.f_1 - 0.001f)) <= Var9.f_1) && Var9.f_1 <= func_253((Param4.f_1 + 0.001f), (Param6.f_1 + 0.001f)))
		{
			*uParam8 = { Var9 };
			return 1;
		}
	}
	*uParam8 = { func_108(3.402823E+38f, 3.402823E+38f) };
	return 0;
}

float func_253(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

float func_254(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_255(var uParam0, var uParam1)
{
	if (func_258(*uParam0, (*uParam1 - 0.0001f), (*uParam1 + 0.0001f)))
	{
		*uParam0 = (*uParam0 + 0.008333333f);
		*uParam1 = (*uParam1 - 0.008333333f);
	}
	if (func_258(uParam0->f_1, (uParam1->f_1 - 0.0001f), (uParam1->f_1 + 0.0001f)))
	{
		uParam0->f_1 = (uParam0->f_1 + 0.01481481f);
		uParam1->f_1 = (uParam1->f_1 - 0.01481481f);
	}
}

struct<2> func_256(struct<2> Param0, struct<2> Param2, float fParam4)
{
	return func_186(func_257(Param0, (1f - fParam4)), func_257(Param2, fParam4));
}

struct<2> func_257(struct<2> Param0, float fParam2)
{
	struct<2> Var0;
	
	Var0.f_0 = (Param0.f_0 * fParam2);
	Var0.f_1 = (Param0.f_1 * fParam2);
	return Var0;
}

bool func_258(float fParam0, float fParam1, float fParam2)
{
	return (fParam0 >= fParam1 && fParam0 < fParam2);
}

void func_259(int iParam0, int iParam1)
{
	char* sVar0;
	
	sVar0 = "";
	switch (Local_913[iParam0 /*37*/].f_9.f_5[iParam1 /*5*/].f_4)
	{
		case 1:
			sVar0 = "Pistol_Fire";
			break;
		
		case 3:
			sVar0 = "Assault_Rifle_Fire";
			break;
		
		case 2:
			sVar0 = "Machine_Pistol_Fire";
			break;
		
		case 5:
			sVar0 = "Shotgun_Fire";
			break;
		
		case 4:
			sVar0 = "Rocket_Fire";
			break;
	}
	if (Local_913[iParam0 /*37*/].f_9.f_5[iParam1 /*5*/].f_4 == 1)
	{
		func_164(sVar0, iParam0, &(Local_152.f_204[iParam0 /*19*/].f_8));
	}
	else
	{
		func_260(sVar0, iParam0, &(Local_152.f_204[iParam0 /*19*/].f_8));
	}
}

void func_260(char* sParam0, int iParam1, var uParam2)
{
	float fVar0;
	
	fVar0 = func_166(Local_152.f_204[iParam1 /*19*/]);
	if (*uParam2 == -1)
	{
		*uParam2 = AUDIO::GET_SOUND_ID();
	}
	AUDIO::PLAY_SOUND_FRONTEND(*uParam2, sParam0, "dlc_vw_am_tw_global_sounds", false);
	AUDIO::SET_VARIABLE_ON_SOUND(*uParam2, "Screen_Position", fVar0);
}

void func_261()
{
	int* iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
		}
		else if (Local_811[bVar1 /*9*/].f_6 == -1)
		{
		}
		else
		{
			func_262(bVar1, &iVar0);
		}
		bVar1++;
	}
	Local_152.f_305 = iVar0;
}

void func_262(int iParam0, int* iParam1)
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	struct<2> Var6;
	struct<2> Var8;
	int iVar10;
	bool bVar11;
	float fVar12;
	struct<2> Var13;
	float fVar15;
	struct<2> Var16;
	struct<2> Var18;
	int iVar20;
	int iVar21;
	int iVar22;
	
	iVar10 = 0;
	iVar10 = 0;
	while (iVar10 <= 1)
	{
		bVar11 = func_223(iParam0, iVar10);
		if (Local_848[iParam0 /*16*/].f_5[iVar10 /*5*/] == -2147483647)
		{
			if (BitTest(Local_152.f_303, bVar11))
			{
				MISC::CLEAR_BIT(&(Local_152.f_303), bVar11);
			}
		}
		else
		{
			MISC::SET_BIT(iParam1, bVar11);
			if (!BitTest(Local_152.f_305, bVar11))
			{
				Local_152.f_204[iParam0 /*19*/].f_5 = 0;
				func_265(iParam0, iVar10);
			}
			fVar12 = 0f;
			Var13 = { Local_848[iParam0 /*16*/].f_5[iVar10 /*5*/].f_1 };
			switch (Local_848[iParam0 /*16*/].f_5[iVar10 /*5*/].f_3)
			{
				case 0:
					fVar12 = -(IntToFloat(Local_152.f_59[Local_848[iParam0 /*16*/].f_5[iVar10 /*5*/].f_4 /*5*/].f_2) * 0.185185f);
					Var13.f_1 = (Var13.f_1 + fVar12);
					Var8 = { func_108(0f, 0.01481481f) };
					break;
				
				case 1:
					fVar12 = (IntToFloat(Local_152.f_59[Local_848[iParam0 /*16*/].f_5[iVar10 /*5*/].f_4 /*5*/].f_2) * 0.185185f);
					Var13.f_1 = (Var13.f_1 + fVar12);
					Var8 = { func_108(0f, -0.01481481f) };
					break;
				
				case 2:
					fVar12 = -(IntToFloat(Local_152.f_59[Local_848[iParam0 /*16*/].f_5[iVar10 /*5*/].f_4 /*5*/].f_2) * 0.104167f);
					Var13.f_0 = (Var13.f_0 + fVar12);
					Var8 = { func_108(0.008333333f, 0f) };
					break;
				
				case 3:
					fVar12 = (IntToFloat(Local_152.f_59[Local_848[iParam0 /*16*/].f_5[iVar10 /*5*/].f_4 /*5*/].f_2) * 0.104167f);
					Var13.f_0 = (Var13.f_0 + fVar12);
					Var8 = { func_108(-0.008333333f, 0f) };
					break;
			}
			fVar15 = (SYSTEM::TO_FLOAT((NETWORK::GET_NETWORK_TIME() - Local_848[iParam0 /*16*/].f_5[iVar10 /*5*/])) / SYSTEM::TO_FLOAT((Local_152.f_59[Local_848[iParam0 /*16*/].f_5[iVar10 /*5*/].f_4 /*5*/].f_2 * Local_152.f_59[Local_848[iParam0 /*16*/].f_5[iVar10 /*5*/].f_4 /*5*/].f_1)));
			if (BitTest(Local_152.f_303, bVar11))
			{
				if (fVar15 > 1f)
				{
					Local_152.f_204[iParam0 /*19*/].f_10[iVar10 /*4*/].f_2 = { func_108(-1f, -1f) };
					if (iParam0 == Local_152.f_178)
					{
						Local_848[Local_152.f_178 /*16*/].f_5[iVar10 /*5*/] = -2147483647;
						Local_848[Local_152.f_178 /*16*/].f_5[iVar10 /*5*/].f_1 = -1f;
						Local_848[Local_152.f_178 /*16*/].f_5[iVar10 /*5*/].f_1.f_1 = -1f;
						Local_848[Local_152.f_178 /*16*/].f_5[iVar10 /*5*/].f_3 = -1;
						Local_848[Local_152.f_178 /*16*/].f_5[iVar10 /*5*/].f_4 = -1;
					}
				}
			}
			else
			{
				Var16 = { Local_848[iParam0 /*16*/].f_5[iVar10 /*5*/].f_1 };
				Var18 = { Var13 };
				if (func_258(Local_152.f_204[iParam0 /*19*/].f_10[iVar10 /*4*/].f_2, (-1f - 0.0001f), (-1f + 0.0001f)) && func_258(Local_152.f_204[iParam0 /*19*/].f_10[iVar10 /*4*/].f_2.f_1, (-1f - 0.0001f), (-1f + 0.0001f)))
				{
					Local_152.f_204[iParam0 /*19*/].f_10[iVar10 /*4*/].f_2 = { Var16 };
				}
				else
				{
					Local_152.f_204[iParam0 /*19*/].f_10[iVar10 /*4*/].f_2 = { Local_152.f_204[iParam0 /*19*/].f_10[iVar10 /*4*/] };
				}
				Local_152.f_204[iParam0 /*19*/].f_10[iVar10 /*4*/] = { func_256(Var16, Var18, fVar15) };
				iVar20 = 0;
				iVar21 = 0;
				Var4 = { Local_152.f_204[iParam0 /*19*/].f_10[iVar10 /*4*/] };
				Var6 = { func_186(Local_152.f_204[iParam0 /*19*/].f_10[iVar10 /*4*/].f_2, Var8) };
				iVar20 = 0;
				while (iVar20 <= 3)
				{
					if (iVar20 == iParam0)
					{
					}
					else if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar20)))
					{
					}
					else if (Local_811[bVar20 /*9*/].f_6 == -1)
					{
					}
					else if (func_68(bVar20))
					{
					}
					else
					{
						Var0 = { Local_152.f_204[bVar20 /*19*/] };
						Var2 = { Local_152.f_204[bVar20 /*19*/].f_2 };
						if (MISC::ABSF((Var0.f_0 - Var4.f_0)) > 0.104167f || MISC::ABSF((Var0.f_1 - Var4.f_1)) > 0.185185f)
						{
						}
						else if (func_251(Var4, Var6, Var0, Var2))
						{
							func_264(iVar10, bVar20, iParam0);
							iVar21 = 1;
						}
					}
					bVar20++;
				}
				iVar22 = 0;
				iVar22 = 0;
				while (iVar22 <= 3)
				{
					if (iVar22 == iParam0)
					{
					}
					else if (!Local_913[iVar22 /*37*/].f_25)
					{
					}
					else if (Local_913[iVar22 /*37*/].f_6 == -1)
					{
					}
					else if (func_248(iVar22))
					{
					}
					else
					{
						Var0 = { Local_152.f_204[iVar22 /*19*/] };
						Var2 = { Local_152.f_204[iVar22 /*19*/].f_2 };
						if (MISC::ABSF((Var0.f_0 - Var4.f_0)) > 0.104167f || MISC::ABSF((Var0.f_1 - Var4.f_1)) > 0.185185f)
						{
						}
						else if (func_251(Var4, Var6, Var0, Var2))
						{
							func_263(iVar10, iVar22, iParam0);
							iVar21 = 1;
						}
					}
					iVar22++;
				}
				if (fVar15 >= 1f || iVar21)
				{
					if (!BitTest(Local_152.f_303, bVar11))
					{
						if (Local_848[iParam0 /*16*/].f_5[iVar10 /*5*/].f_4 == 4)
						{
							func_243(Local_152.f_204[iParam0 /*19*/].f_10[iVar10 /*4*/]);
						}
						MISC::SET_BIT(&(Local_152.f_303), bVar11);
					}
				}
			}
		}
		iVar10++;
	}
}

void func_263(int iParam0, int iParam1, int iParam2)
{
	Local_152.f_204[iParam2 /*19*/].f_10[iParam0 /*4*/] = { Local_152.f_204[iParam1 /*19*/] };
	func_246(iParam1, -Local_152.f_59[Local_848[iParam2 /*16*/].f_5[iParam0 /*5*/].f_4 /*5*/].f_4, 0);
	PAD::SET_PAD_SHAKE(0, 250, 200);
	Local_913[iParam1 /*37*/].f_3 = NETWORK::GET_NETWORK_TIME();
	if (Local_913[iParam1 /*37*/] != 2)
	{
		func_163((6 + Local_811[iParam2 /*9*/].f_6));
	}
	if (Local_913[iParam1 /*37*/].f_2 <= 0)
	{
		func_163((2 + Local_913[iParam1 /*37*/].f_6));
		Local_130.f_18++;
	}
}

void func_264(int iParam0, int iParam1, int iParam2)
{
	Local_152.f_204[iParam2 /*19*/].f_10[iParam0 /*4*/] = { Local_152.f_204[iParam1 /*19*/] };
	if (iParam1 == Local_152.f_178)
	{
		func_250(-Local_152.f_59[Local_848[iParam2 /*16*/].f_5[iParam0 /*5*/].f_4 /*5*/].f_4, 0);
		PAD::SET_PAD_SHAKE(0, 250, 200);
		Local_811[Local_152.f_178 /*9*/].f_3 = NETWORK::GET_NETWORK_TIME();
		if (Local_811[Local_152.f_178 /*9*/] != 2)
		{
			func_163((6 + Local_811[iParam2 /*9*/].f_6));
		}
	}
	else if (iParam2 == Local_152.f_178 && (Local_811[iParam1 /*9*/].f_2 - Local_152.f_59[Local_848[iParam2 /*16*/].f_5[iParam0 /*5*/].f_4 /*5*/].f_4) <= 0)
	{
		func_163((2 + Local_811[iParam1 /*9*/].f_6));
		Local_130.f_18++;
	}
}

void func_265(int iParam0, int iParam1)
{
	char* sVar0;
	
	sVar0 = "";
	switch (Local_848[iParam0 /*16*/].f_5[iParam1 /*5*/].f_4)
	{
		case 1:
			sVar0 = "Pistol_Fire";
			break;
		
		case 3:
			sVar0 = "Assault_Rifle_Fire";
			break;
		
		case 2:
			sVar0 = "Machine_Pistol_Fire";
			break;
		
		case 5:
			sVar0 = "Shotgun_Fire";
			break;
		
		case 4:
			sVar0 = "Rocket_Fire";
			break;
	}
	if (Local_848[iParam0 /*16*/].f_5[iParam1 /*5*/].f_4 == 1)
	{
		func_164(sVar0, iParam0, &(Local_152.f_204[iParam0 /*19*/].f_8));
	}
	else
	{
		func_260(sVar0, iParam0, &(Local_152.f_204[iParam0 /*19*/].f_8));
	}
}

void func_266()
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	struct<2> Var6;
	struct<2> Var8;
	bool bVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	float fVar18;
	struct<2> Var19;
	struct<2> Var21;
	struct<2> Var23;
	int iVar25;
	int iVar26;
	int iVar27;
	
	bVar10 = false;
	iVar11 = 0;
	while (iVar11 <= 2)
	{
		iVar16 = NETWORK::GET_NETWORK_TIME();
		if (Local_605.f_148[iVar11 /*4*/].f_3 != -1 && iVar16 > Local_605.f_148[iVar11 /*4*/])
		{
			iVar17 = func_72((Local_605.f_148[iVar11 /*4*/].f_2 == 1 || Local_605.f_148[iVar11 /*4*/].f_2 == 0), 11, 15) * 650;
			if (iVar16 > (Local_605.f_148[iVar11 /*4*/] + iVar17))
			{
			}
			else
			{
				bVar10 = true;
				fVar18 = (SYSTEM::TO_FLOAT((iVar16 - Local_605.f_148[iVar11 /*4*/])) / SYSTEM::TO_FLOAT(iVar17));
				func_184(Local_605.f_148[iVar11 /*4*/].f_1, &iVar12, &iVar13);
				switch (Local_605.f_148[iVar11 /*4*/].f_2)
				{
					case 0:
						iVar14 = iVar12;
						iVar15 = 0;
						Var8 = { func_108(0f, -(Local_152.f_22[Local_605.f_148[iVar11 /*4*/].f_3 /*4*/].f_2.f_1 / 2f)) };
						break;
					
					case 1:
						iVar14 = iVar12;
						iVar15 = 8;
						Var8 = { func_108(0f, (Local_152.f_22[Local_605.f_148[iVar11 /*4*/].f_3 /*4*/].f_2.f_1 / 2f)) };
						break;
					
					case 2:
						iVar14 = 0;
						iVar15 = iVar13;
						Var8 = { func_108(-(Local_152.f_22[Local_605.f_148[iVar11 /*4*/].f_3 /*4*/].f_2 / 2f), 0f) };
						break;
					
					case 3:
						iVar14 = 12;
						iVar15 = iVar13;
						Var8 = { func_108((Local_152.f_22[Local_605.f_148[iVar11 /*4*/].f_3 /*4*/].f_2 / 2f), 0f) };
						break;
				}
				Var19 = { func_187(Local_605.f_148[iVar11 /*4*/].f_1) };
				Var21 = { func_187(func_71(iVar14, iVar15)) };
				switch (Local_605.f_148[iVar11 /*4*/].f_2)
				{
					case 0:
						Var19.f_1 = (Var19.f_1 + 0.1851855f);
						Var21.f_1 = (Var21.f_1 + -0.1851855f);
						break;
					
					case 1:
						Var19.f_1 = (Var19.f_1 + -0.1851855f);
						Var21.f_1 = (Var21.f_1 + 0.1851855f);
						break;
					
					case 2:
						Var19.f_0 = (Var19.f_0 + 0.1041665f);
						Var21.f_0 = (Var21.f_0 + -0.1041665f);
						break;
					
					case 3:
						Var19.f_0 = (Var19.f_0 + -0.1041665f);
						Var21.f_0 = (Var21.f_0 + 0.1041665f);
						break;
				}
				Local_152.f_281[iVar11 /*7*/].f_2 = { Local_152.f_281[iVar11 /*7*/] };
				Local_152.f_281[iVar11 /*7*/] = { func_256(Var19, Var21, fVar18) };
				if (!func_204(Local_152.f_281[iVar11 /*7*/], Local_152.f_22[Local_605.f_148[iVar11 /*4*/].f_3 /*4*/].f_2))
				{
					if (func_204(Local_152.f_281[iVar11 /*7*/].f_2, Local_152.f_22[Local_605.f_148[iVar11 /*4*/].f_3 /*4*/].f_2))
					{
						if (Local_605.f_148[iVar11 /*4*/].f_3 != 0)
						{
							func_221(func_272(Local_605.f_148[iVar11 /*4*/].f_3), Local_152.f_281[iVar11 /*7*/], 1);
						}
					}
					else
					{
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_vehicle_drivethrough_scene"))
						{
							AUDIO::START_AUDIO_SCENE("dlc_vw_am_tw_vehicle_drivethrough_scene");
						}
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_in_gameplay_scene"))
						{
							AUDIO::STOP_AUDIO_SCENE("dlc_vw_am_tw_in_gameplay_scene");
						}
						if (iVar11 != 2)
						{
							Var23 = { Local_152.f_281[iVar11 /*7*/] };
							if (iVar11 == 1 && Local_605.f_148[iVar11 /*4*/].f_2 != Local_605.f_148[2 /*4*/].f_2)
							{
								Var23 = { func_108(0.5f, 0.5f) };
							}
							if (Local_605.f_148[iVar11 /*4*/].f_3 >= 5)
							{
								iVar25 = (Local_605.f_148[iVar11 /*4*/].f_3 - 5);
								func_270(func_271(Local_605.f_148[iVar11 /*4*/].f_3), &(Local_152.f_281[iVar11 /*7*/].f_5), Var23, iVar25);
							}
							else
							{
								func_169(func_271(Local_605.f_148[iVar11 /*4*/].f_3), &(Local_152.f_281[iVar11 /*7*/].f_5), Var23, 1);
							}
						}
					}
				}
				else if (Local_152.f_281[iVar11 /*7*/].f_5 != -1)
				{
					func_170(&(Local_152.f_281[iVar11 /*7*/].f_5));
				}
				Var4 = { func_186(Local_152.f_281[iVar11 /*7*/], Var8) };
				Var6 = { func_269(Local_152.f_281[iVar11 /*7*/].f_2, Var8) };
				iVar26 = 0;
				iVar26 = 0;
				while (iVar26 <= 3)
				{
					if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar26)))
					{
					}
					else if (Local_811[bVar26 /*9*/].f_6 == -1)
					{
					}
					else if (func_68(bVar26))
					{
					}
					else
					{
						Var0 = { Local_152.f_204[bVar26 /*19*/] };
						Var2 = { Local_152.f_204[bVar26 /*19*/].f_2 };
						if (MISC::ABSF((Var0.f_0 - Var4.f_0)) > 0.104167f || MISC::ABSF((Var0.f_1 - Var4.f_1)) > 0.185185f)
						{
						}
						else if (func_251(Var4, Var6, Var0, Var2))
						{
							func_268(bVar26);
						}
					}
					bVar26++;
				}
				iVar27 = 0;
				iVar27 = 0;
				while (iVar27 <= 3)
				{
					if (!Local_913[iVar27 /*37*/].f_25)
					{
					}
					else if (Local_913[iVar27 /*37*/].f_6 == -1)
					{
					}
					else if (func_248(iVar27))
					{
					}
					else
					{
						Var0 = { Local_152.f_204[iVar27 /*19*/] };
						Var2 = { Local_152.f_204[iVar27 /*19*/].f_2 };
						if (MISC::ABSF((Var0.f_0 - Var4.f_0)) > 0.104167f || MISC::ABSF((Var0.f_1 - Var4.f_1)) > 0.185185f)
						{
						}
						else if (func_251(Var4, Var6, Var0, Var2))
						{
							func_267(iVar27);
						}
					}
					iVar27++;
				}
				Jump @1613; //curOff = 1374
				if (Local_152.f_281[iVar11 /*7*/].f_5 != -1)
				{
					func_170(&(Local_152.f_281[iVar11 /*7*/].f_5));
				}
				Local_152.f_281[iVar11 /*7*/] = { func_187(Local_605.f_148[iVar11 /*4*/].f_1) };
				switch (Local_605.f_148[iVar11 /*4*/].f_2)
				{
					case 0:
						Local_152.f_281[iVar11 /*7*/].f_1 = (Local_152.f_281[iVar11 /*7*/].f_1 + 0.1851855f);
						break;
					
					case 1:
						Local_152.f_281[iVar11 /*7*/].f_1 = (Local_152.f_281[iVar11 /*7*/].f_1 + -0.1851855f);
						break;
					
					case 2:
						Local_152.f_281[iVar11 /*7*/] = (Local_152.f_281[iVar11 /*7*/] + 0.1041665f);
						break;
					
					case 3:
						Local_152.f_281[iVar11 /*7*/] = (Local_152.f_281[iVar11 /*7*/] + -0.1041665f);
						break;
				}
				Local_152.f_281[iVar11 /*7*/].f_2 = { Local_152.f_281[iVar11 /*7*/] };
			}
			iVar11++;
			if (!bVar10)
			{
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_in_gameplay_scene"))
				{
					AUDIO::START_AUDIO_SCENE("dlc_vw_am_tw_in_gameplay_scene");
				}
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_vehicle_drivethrough_scene"))
				{
					AUDIO::STOP_AUDIO_SCENE("dlc_vw_am_tw_vehicle_drivethrough_scene");
				}
			}
		}

void func_267(int iParam0)
{
	func_246(iParam0, -8, 1);
	Local_913[iParam0 /*37*/].f_3 = NETWORK::GET_NETWORK_TIME();
	func_163(10);
}

void func_268(int iParam0)
{
	if (iParam0 == Local_152.f_178)
	{
		func_250(-8, 1);
		PAD::SET_PAD_SHAKE(0, 1000, 200);
		Local_811[Local_152.f_178 /*9*/].f_3 = NETWORK::GET_NETWORK_TIME();
		func_163(10);
	}
}

struct<2> func_269(struct<2> Param0, struct<2> Param2)
{
	struct<2> Var0;
	
	Var0.f_0 = (Param0.f_0 - Param2.f_0);
	Var0.f_1 = (Param0.f_1 - Param2.f_1);
	return Var0;
}

void func_270(char* sParam0, var uParam1, struct<2> Param2, int iParam4)
{
	float fVar0;
	
	fVar0 = func_166(Param2);
	if (*uParam1 == -1)
	{
		*uParam1 = AUDIO::GET_SOUND_ID();
	}
	if (AUDIO::HAS_SOUND_FINISHED(*uParam1))
	{
		AUDIO::PLAY_SOUND_FRONTEND(*uParam1, sParam0, func_165(iParam4), false);
	}
	AUDIO::SET_VARIABLE_ON_SOUND(*uParam1, "Screen_Position", fVar0);
}

char* func_271(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Ice_Cream_Van_Loop";
		
		case 1:
		case 2:
		case 3:
			return "Emergency_Siren_Loop";
		
		case 4:
			return "Tank_Loop";
		
		case 5:
		case 6:
		case 7:
		case 8:
			return "Gang_Van_Loop";
		
		default:
	}
	return "INVALID VEHICLE";
}

char* func_272(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "Ambulance_Warning";
		
		case 2:
			return "Police_Car_Warning";
		
		case 3:
			return "Fire_Truck_Warning";
		
		case 4:
			return "Tank_Warning";
		
		case 5:
		case 6:
		case 7:
		case 8:
			return "Gang_Van_Warning";
		
		default:
	}
	return "INVALID VEHICLE";
}

void func_273()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!Local_913[iVar0 /*37*/].f_25)
		{
		}
		else if (Local_913[iVar0 /*37*/].f_6 == -1)
		{
		}
		else if (func_68(iVar0))
		{
			Local_152.f_204[iVar0 /*19*/].f_2 = { func_108(-1f, -1f) };
		}
		else
		{
			func_274(iVar0);
		}
		iVar0++;
	}
}

void func_274(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	struct<2> Var6;
	float fVar8;
	var uVar9;
	var uVar10;
	int iVar11;
	bool bVar12;
	
	func_184(Local_913[iParam0 /*37*/].f_9, &iVar0, &iVar1);
	func_184(Local_913[iParam0 /*37*/].f_9.f_1, &iVar2, &iVar3);
	Var4 = { func_187(Local_913[iParam0 /*37*/].f_9) };
	Var6 = { func_187(Local_913[iParam0 /*37*/].f_9.f_1) };
	fVar8 = (SYSTEM::TO_FLOAT((NETWORK::GET_NETWORK_TIME() - Local_913[iParam0 /*37*/].f_9.f_2)) / SYSTEM::TO_FLOAT(func_280(iParam0)));
	if (fVar8 < 0f)
	{
		fVar8 = 0f;
	}
	if ((fVar8 >= 0.65f && !BitTest(Local_152.f_142[iParam0], 0)) || (fVar8 >= 0.8f && !BitTest(Local_152.f_142[iParam0], 1)))
	{
		if (iVar2 != iVar0)
		{
			if (iVar2 > iVar0)
			{
				func_279(Local_913[iParam0 /*37*/].f_9, 1, Local_913[iParam0 /*37*/].f_6);
			}
			else
			{
				uVar9 = func_71((iVar0 - 1), iVar1);
				func_279(uVar9, 1, Local_913[iParam0 /*37*/].f_6);
			}
		}
		else if (iVar3 != iVar1)
		{
			if (iVar3 > iVar1)
			{
				func_279(Local_913[iParam0 /*37*/].f_9, 0, Local_913[iParam0 /*37*/].f_6);
			}
			else
			{
				uVar10 = func_71(iVar0, (iVar1 - 1));
				func_279(uVar10, 0, Local_913[iParam0 /*37*/].f_6);
			}
		}
		if (!BitTest(Local_152.f_142[iParam0], 0))
		{
			MISC::SET_BIT(&(Local_152.f_142[iParam0]), false);
		}
		else
		{
			MISC::CLEAR_BIT(&(Local_152.f_142[iParam0]), 4);
			MISC::SET_BIT(&(Local_152.f_142[iParam0]), true);
		}
	}
	if (fVar8 > 0.85f || fVar8 < 0.15f)
	{
		if (fVar8 > 0.85f)
		{
			iVar11 = Local_913[iParam0 /*37*/].f_9;
		}
		else
		{
			iVar11 = Local_913[iParam0 /*37*/].f_9.f_1;
		}
		bVar12 = false;
		while (bVar12 <= 6)
		{
			if (Local_605.f_62[bVar12 /*3*/].f_1 == -1)
			{
				if (BitTest(Local_152.f_309, bVar12))
				{
					MISC::CLEAR_BIT(&(Local_152.f_309), bVar12);
				}
			}
			else if (!func_278(bVar12, iParam0))
			{
			}
			else if ((NETWORK::GET_NETWORK_TIME() - Local_605.f_62[bVar12 /*3*/].f_2) < 1250)
			{
			}
			else if (BitTest(Local_152.f_309, bVar12))
			{
			}
			else if (iVar11 == Local_605.f_62[bVar12 /*3*/])
			{
				MISC::SET_BIT(&(Local_152.f_309), bVar12);
				func_276(bVar12, iParam0);
				func_275(bVar12);
				func_163(11);
			}
			bVar12++;
		}
	}
	if (fVar8 < 1f)
	{
		if (Local_152.f_204[iParam0 /*19*/].f_2 < 0f && Local_152.f_204[iParam0 /*19*/].f_2.f_1 < 0f)
		{
			Local_152.f_204[iParam0 /*19*/].f_2 = { func_256(Var6, Var4, fVar8) };
		}
		else
		{
			Local_152.f_204[iParam0 /*19*/].f_2 = { Local_152.f_204[iParam0 /*19*/] };
		}
		Local_152.f_204[iParam0 /*19*/] = { func_256(Var6, Var4, fVar8) };
		return;
	}
	if (Local_152.f_204[iParam0 /*19*/].f_2 < 0f && Local_152.f_204[iParam0 /*19*/].f_2.f_1 < 0f)
	{
		Local_152.f_204[iParam0 /*19*/].f_2 = { Var4 };
	}
	else
	{
		Local_152.f_204[iParam0 /*19*/].f_2 = { Local_152.f_204[iParam0 /*19*/] };
	}
	Local_152.f_204[iParam0 /*19*/] = { Var4 };
	Local_152.f_204[iParam0 /*19*/].f_4 = 0;
}

void func_275(bool bParam0)
{
	struct<3> Var0;
	int iVar3;
	
	Var0.f_0 = 1889605535;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam0;
	iVar3 = func_135(1);
	if (!iVar3 == 0)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 3, iVar3);
	}
}

void func_276(bool bParam0, int iParam1)
{
	Local_130.f_17++;
	switch (Local_605.f_62[bParam0 /*3*/].f_1)
	{
		case 0:
			func_246(iParam1, 4, 0);
			break;
		
		case 1:
			Local_152.f_178.f_2 += 10;
			break;
		
		case 2:
			func_277(Local_913[iParam1 /*37*/].f_9, Local_913[iParam1 /*37*/].f_6);
			break;
		
		case 3:
			Local_913[iParam1 /*37*/].f_5 = 1;
			break;
		
		case 4:
			Local_913[iParam1 /*37*/].f_5 = 2;
			break;
		
		case 5:
			Local_913[iParam1 /*37*/].f_5 = 3;
			break;
		
		case 6:
			Local_913[iParam1 /*37*/].f_5 = 4;
			break;
		
		case 7:
			Local_913[iParam1 /*37*/].f_5 = 5;
			break;
	}
	if (!BitTest(Local_152.f_417, 2) && Local_913[iParam1 /*37*/].f_5 != 0)
	{
	}
}

void func_277(var uParam0, var uParam1)
{
	struct<4> Var0;
	int iVar4;
	
	Var0.f_0 = -1100083080;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam0;
	Var0.f_3 = uParam1;
	iVar4 = func_135(1);
	if (!iVar4 == 0)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 4, iVar4);
	}
}

int func_278(bool bParam0, int iParam1)
{
	switch (Local_605.f_62[bParam0 /*3*/].f_1)
	{
		case 0:
			if (Local_913[iParam1 /*37*/].f_2 == 8)
			{
				return 0;
			}
			break;
		
		case 1:
		case 2:
			return 1;
		
		case 3:
			if (Local_913[iParam1 /*37*/].f_5 == 1)
			{
				return 0;
			}
			break;
		
		case 4:
			if (Local_913[iParam1 /*37*/].f_5 == 2)
			{
				return 0;
			}
			break;
		
		case 5:
			if (Local_913[iParam1 /*37*/].f_5 == 3)
			{
				return 0;
			}
			break;
		
		case 6:
			if (Local_913[iParam1 /*37*/].f_5 == 4)
			{
				return 0;
			}
			break;
		
		case 7:
			if (Local_913[iParam1 /*37*/].f_5 == 5)
			{
				return 0;
			}
			break;
	}
	return 1;
}

void func_279(var uParam0, int iParam1, var uParam2)
{
	struct<5> Var0;
	int iVar5;
	
	Var0.f_0 = 1551971435;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam0;
	Var0.f_3 = iParam1;
	Var0.f_4 = uParam2;
	iVar5 = func_135(1);
	if (!iVar5 == 0)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 5, iVar5);
	}
}

int func_280(int iParam0)
{
	return SYSTEM::ROUND((700f * Local_913[iParam0 /*37*/].f_1));
}

void func_281()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
		}
		else if (Local_811[bVar0 /*9*/].f_6 == -1)
		{
		}
		else if (func_68(bVar0))
		{
			Local_152.f_204[bVar0 /*19*/].f_2 = { func_108(-1f, -1f) };
		}
		else
		{
			func_282(bVar0);
		}
		bVar0++;
	}
}

void func_282(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	struct<2> Var6;
	float fVar8;
	var uVar9;
	var uVar10;
	int iVar11;
	bool bVar12;
	
	func_184(Local_848[iParam0 /*16*/], &iVar0, &iVar1);
	func_184(Local_848[iParam0 /*16*/].f_1, &iVar2, &iVar3);
	Var4 = { func_187(Local_848[iParam0 /*16*/]) };
	Var6 = { func_187(Local_848[iParam0 /*16*/].f_1) };
	fVar8 = (SYSTEM::TO_FLOAT((NETWORK::GET_NETWORK_TIME() - Local_848[iParam0 /*16*/].f_2)) / SYSTEM::TO_FLOAT(func_183(iParam0)));
	if (fVar8 < 0f)
	{
		fVar8 = 0f;
	}
	if (iParam0 == Local_152.f_178 && ((fVar8 >= 0.65f && !BitTest(Local_152.f_141, 0)) || (fVar8 >= 0.8f && !BitTest(Local_152.f_141, 1))))
	{
		if (iVar2 != iVar0)
		{
			if (iVar2 > iVar0)
			{
				func_279(Local_848[iParam0 /*16*/], 1, Local_811[iParam0 /*9*/].f_6);
			}
			else
			{
				uVar9 = func_71((iVar0 - 1), iVar1);
				func_279(uVar9, 1, Local_811[iParam0 /*9*/].f_6);
			}
		}
		else if (iVar3 != iVar1)
		{
			if (iVar3 > iVar1)
			{
				func_279(Local_848[iParam0 /*16*/], 0, Local_811[iParam0 /*9*/].f_6);
			}
			else
			{
				uVar10 = func_71(iVar0, (iVar1 - 1));
				func_279(uVar10, 0, Local_811[iParam0 /*9*/].f_6);
			}
		}
		if (!BitTest(Local_152.f_141, 0))
		{
			MISC::SET_BIT(&(Local_152.f_141), false);
		}
		else
		{
			MISC::CLEAR_BIT(&(Local_152.f_141), 4);
			MISC::SET_BIT(&(Local_152.f_141), true);
		}
	}
	if (fVar8 > 0.85f || fVar8 < 0.15f)
	{
		if (fVar8 > 0.85f)
		{
			iVar11 = Local_848[iParam0 /*16*/];
		}
		else
		{
			iVar11 = Local_848[iParam0 /*16*/].f_1;
		}
		bVar12 = false;
		while (bVar12 <= 6)
		{
			if (Local_605.f_62[bVar12 /*3*/].f_1 == -1)
			{
				if (BitTest(Local_152.f_309, bVar12))
				{
					MISC::CLEAR_BIT(&(Local_152.f_309), bVar12);
				}
			}
			else if (!func_284(bVar12))
			{
			}
			else if ((NETWORK::GET_NETWORK_TIME() - Local_605.f_62[bVar12 /*3*/].f_2) < 1250)
			{
			}
			else if (BitTest(Local_152.f_309, bVar12))
			{
			}
			else if (iVar11 == Local_605.f_62[bVar12 /*3*/])
			{
				if (iParam0 == Local_152.f_178)
				{
					MISC::SET_BIT(&(Local_152.f_309), bVar12);
					func_283(bVar12);
					PAD::SET_PAD_SHAKE(0, 100, 50);
					func_275(bVar12);
					func_163(11);
				}
			}
			bVar12++;
		}
	}
	if (fVar8 < 1f)
	{
		if (Local_152.f_204[iParam0 /*19*/].f_2 < 0f && Local_152.f_204[iParam0 /*19*/].f_2.f_1 < 0f)
		{
			Local_152.f_204[iParam0 /*19*/].f_2 = { func_256(Var6, Var4, fVar8) };
		}
		else
		{
			Local_152.f_204[iParam0 /*19*/].f_2 = { Local_152.f_204[iParam0 /*19*/] };
		}
		Local_152.f_204[iParam0 /*19*/] = { func_256(Var6, Var4, fVar8) };
		return;
	}
	if (Local_152.f_204[iParam0 /*19*/].f_2 < 0f && Local_152.f_204[iParam0 /*19*/].f_2.f_1 < 0f)
	{
		Local_152.f_204[iParam0 /*19*/].f_2 = { Var4 };
	}
	else
	{
		Local_152.f_204[iParam0 /*19*/].f_2 = { Local_152.f_204[iParam0 /*19*/] };
	}
	Local_152.f_204[iParam0 /*19*/] = { Var4 };
	Local_152.f_204[iParam0 /*19*/].f_4 = 0;
}

void func_283(bool bParam0)
{
	struct<2> Var0;
	
	Var0 = { func_187(Local_605.f_62[bParam0 /*3*/]) };
	Local_130.f_17++;
	switch (Local_605.f_62[bParam0 /*3*/].f_1)
	{
		case 0:
			func_221("Pickup_Health", Var0, 1);
			func_250(4, 0);
			break;
		
		case 1:
			func_221("Pickup_Speed", Var0, 1);
			Local_152.f_178.f_2 += 10;
			break;
		
		case 2:
			func_221("Pickup_Collect_Transport", Var0, 1);
			func_277(Local_848[Local_152.f_178 /*16*/], Local_811[Local_152.f_178 /*9*/].f_6);
			break;
		
		case 3:
			func_221("Pickup_Collect_Weapon", Var0, 1);
			Local_811[Local_152.f_178 /*9*/].f_5 = 1;
			break;
		
		case 4:
			func_221("Pickup_Collect_Weapon", Var0, 1);
			Local_811[Local_152.f_178 /*9*/].f_5 = 2;
			break;
		
		case 5:
			func_221("Pickup_Collect_Weapon", Var0, 1);
			Local_811[Local_152.f_178 /*9*/].f_5 = 3;
			break;
		
		case 6:
			func_221("Pickup_Collect_Weapon", Var0, 1);
			Local_811[Local_152.f_178 /*9*/].f_5 = 4;
			break;
		
		case 7:
			func_221("Pickup_Collect_Weapon", Var0, 1);
			Local_811[Local_152.f_178 /*9*/].f_5 = 5;
			break;
	}
	if (!BitTest(Local_152.f_417, 2) && Local_811[Local_152.f_178 /*9*/].f_5 != 0)
	{
		MISC::SET_BIT(&(Local_152.f_417), 2);
		func_151("SCGW_H_SHOOT", 7500, 0);
	}
}

int func_284(bool bParam0)
{
	switch (Local_605.f_62[bParam0 /*3*/].f_1)
	{
		case 0:
			if (Local_811[Local_152.f_178 /*9*/].f_2 == 8)
			{
				return 0;
			}
			break;
		
		case 1:
		case 2:
			return 1;
		
		case 3:
			if (Local_811[Local_152.f_178 /*9*/].f_5 == 1)
			{
				return 0;
			}
			break;
		
		case 4:
			if (Local_811[Local_152.f_178 /*9*/].f_5 == 2)
			{
				return 0;
			}
			break;
		
		case 5:
			if (Local_811[Local_152.f_178 /*9*/].f_5 == 3)
			{
				return 0;
			}
			break;
		
		case 6:
			if (Local_811[Local_152.f_178 /*9*/].f_5 == 4)
			{
				return 0;
			}
			break;
		
		case 7:
			if (Local_811[Local_152.f_178 /*9*/].f_5 == 5)
			{
				return 0;
			}
			break;
	}
	return 1;
}

void func_285(int iParam0)
{
	func_297(iParam0);
	func_293(iParam0);
	func_290(iParam0);
	func_286(iParam0);
}

void func_286(int iParam0)
{
	int iVar0;
	var uVar1;
	bool bVar2;
	
	if (Local_913[iParam0 /*37*/].f_5 == 0)
	{
		return;
	}
	iVar0 = func_288(iParam0);
	bVar2 = false;
	if (iVar0 != -1)
	{
		bVar2 = func_287(iParam0, Local_913[iParam0 /*37*/].f_9.f_4);
	}
	if (bVar2)
	{
		if (NETWORK::GET_NETWORK_TIME() < (Local_152.f_183[iParam0 /*5*/].f_3 + Local_152.f_59[Local_913[iParam0 /*37*/].f_5 /*5*/].f_3))
		{
			return;
		}
		uVar1 = Local_913[iParam0 /*37*/].f_9.f_4;
		Local_913[iParam0 /*37*/].f_9.f_5[Local_152.f_307 /*5*/] = NETWORK::GET_NETWORK_TIME();
		Local_913[iParam0 /*37*/].f_9.f_5[Local_152.f_307 /*5*/].f_3 = uVar1;
		Local_913[iParam0 /*37*/].f_9.f_5[Local_152.f_307 /*5*/].f_4 = Local_913[iParam0 /*37*/].f_5;
		Local_913[iParam0 /*37*/].f_9.f_5[Local_152.f_307 /*5*/].f_1 = { Local_152.f_204[iParam0 /*19*/] };
		Local_913[iParam0 /*37*/].f_9.f_4 = uVar1;
		Local_152.f_183[iParam0 /*5*/].f_3 = NETWORK::GET_NETWORK_TIME();
		Local_152.f_307++;
		if (Local_152.f_307 >= 2)
		{
			Local_152.f_307 = 0;
		}
		PAD::SET_PAD_SHAKE(0, 50, 100);
	}
}

int func_287(int iParam0, int iParam1)
{
	struct<2> Var0;
	struct<2> Var2;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	Var0 = { func_187(func_71(12, 8)) };
	Var2 = { func_187(func_71(0, 0)) };
	switch (iParam1)
	{
		case 0:
			if (func_258(Local_152.f_204[iParam0 /*19*/].f_1, (Var2.f_1 - 0.0001f), (Var2.f_1 + 0.0001f)))
			{
				return 0;
			}
			break;
		
		case 1:
			if (func_258(Local_152.f_204[iParam0 /*19*/].f_1, (Var0.f_1 - 0.0001f), (Var0.f_1 + 0.0001f)))
			{
				return 0;
			}
			break;
		
		case 2:
			if (func_258(Local_152.f_204[iParam0 /*19*/], (Var2.f_0 - 0.0001f), (Var2.f_0 + 0.0001f)))
			{
				return 0;
			}
			break;
		
		case 3:
			if (func_258(Local_152.f_204[iParam0 /*19*/], (Var0.f_0 - 0.0001f), (Var0.f_0 + 0.0001f)))
			{
				return 0;
			}
			break;
	}
	func_184(Local_913[iParam0 /*37*/].f_9, &iVar4, &iVar5);
	func_184(Local_913[iParam0 /*37*/].f_9.f_1, &iVar6, &iVar7);
	if (Local_913[iParam0 /*37*/].f_9.f_2 + func_183(iParam0)) > NETWORK::GET_NETWORK_TIME()
	{
		if (iVar5 != iVar7)
		{
			if (iParam1 == 2 || iParam1 == 3)
			{
				return 0;
			}
		}
		else if (iVar4 != iVar6)
		{
			if (iParam1 == 0 || iParam1 == 1)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_288(int iParam0)
{
	if (func_289(iParam0))
	{
		return -1;
	}
	if (Local_913[iParam0 /*37*/].f_26)
	{
		return 8;
	}
	return -1;
}

int func_289(int iParam0)
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 1;
	}
	if (Local_913[iParam0 /*37*/] != 2)
	{
		return 1;
	}
	return 0;
}

void func_290(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = func_292(iParam0);
	bVar1 = func_291(iParam0, iVar0);
	if (bVar1)
	{
		switch (iVar0)
		{
			case 4:
				Local_913[iParam0 /*37*/].f_9.f_4 = 0;
				break;
			
			case 5:
				Local_913[iParam0 /*37*/].f_9.f_4 = 1;
				break;
			
			case 6:
				Local_913[iParam0 /*37*/].f_9.f_4 = 2;
				break;
			
			case 7:
				Local_913[iParam0 /*37*/].f_9.f_4 = 3;
				break;
			}
	}
}

int func_291(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	func_184(Local_913[iParam0 /*37*/].f_9, &iVar0, &iVar1);
	func_184(Local_913[iParam0 /*37*/].f_9.f_1, &iVar2, &iVar3);
	switch (iParam1)
	{
		case 4:
		case 5:
			if ((iVar0 % 2) != 0)
			{
				return 0;
			}
			break;
		
		case 6:
		case 7:
			if ((iVar1 % 2) != 0)
			{
				return 0;
			}
			break;
	}
	if (Local_913[iParam0 /*37*/].f_9.f_2 + func_183(Local_152.f_178)) > NETWORK::GET_NETWORK_TIME()
	{
		if (iVar1 != iVar3)
		{
			if (iParam1 == 6 || iParam1 == 7)
			{
				return 0;
			}
		}
		else if (iVar0 != iVar2)
		{
			if (iParam1 == 4 || iParam1 == 5)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_292(int iParam0)
{
	if (func_289(iParam0))
	{
		return -1;
	}
	return Local_913[iParam0 /*37*/].f_28;
}

void func_293(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = func_294(iParam0);
	bVar1 = false;
	if (((!((Local_913[iParam0 /*37*/].f_9.f_2 + func_183(Local_152.f_178)) < NETWORK::GET_NETWORK_TIME() && BitTest(Local_152.f_142[iParam0], 1)) && NETWORK::GET_NETWORK_TIME() < Local_913[iParam0 /*37*/].f_9.f_2 + 100) && Local_913[iParam0 /*37*/].f_9.f_3 != iVar0) && !BitTest(Local_152.f_142[iParam0], 4))
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		func_184(Local_913[iParam0 /*37*/].f_9.f_1, &iVar2, &iVar3);
		func_184(Local_913[iParam0 /*37*/].f_9.f_1, &iVar4, &iVar5);
	}
	else
	{
		func_184(Local_913[iParam0 /*37*/].f_9, &iVar2, &iVar3);
		func_184(Local_913[iParam0 /*37*/].f_9.f_1, &iVar4, &iVar5);
	}
	bVar6 = false;
	iVar7 = 0;
	iVar8 = 0;
	switch (iVar0)
	{
		case 0:
			bVar6 = (iVar3 > 0 && (iVar2 % 2) == 0);
			iVar7 = -1;
			break;
		
		case 1:
			bVar6 = (iVar3 < 8 && (iVar2 % 2) == 0);
			iVar7 = 1;
			break;
		
		case 2:
			bVar6 = (iVar2 > 0 && (iVar3 % 2) == 0);
			iVar8 = -1;
			break;
		
		case 3:
			bVar6 = (iVar2 < 12 && (iVar3 % 2) == 0);
			iVar8 = 1;
			break;
	}
	if (bVar6)
	{
		if (((Local_913[iParam0 /*37*/].f_9.f_2 + func_183(iParam0)) < NETWORK::GET_NETWORK_TIME() && BitTest(Local_152.f_142[iParam0], 1)) || bVar1)
		{
			if (bVar1 || !BitTest(Local_152.f_142[iParam0], 5))
			{
				MISC::SET_BIT(&(Local_152.f_142[iParam0]), 4);
			}
			if (iVar4 != iVar2)
			{
				iVar4 = iVar2;
			}
			if (iVar5 != iVar3)
			{
				iVar5 = iVar3;
			}
			if (iVar8 != 0)
			{
				iVar2 = (iVar2 + iVar8);
			}
			if (iVar7 != 0)
			{
				iVar3 = (iVar3 + iVar7);
			}
			Local_913[iParam0 /*37*/].f_9 = func_71(iVar2, iVar3);
			Local_913[iParam0 /*37*/].f_9.f_1 = func_71(iVar4, iVar5);
			if (Local_152.f_178.f_2 > 0)
			{
				Local_913[iParam0 /*37*/].f_1 = 0.75f;
				Local_152.f_178.f_2 = (Local_152.f_178.f_2 - 1);
			}
			else if (!func_258(Local_913[iParam0 /*37*/].f_1, (1f - 0.0001f), (1f + 0.0001f)))
			{
				Local_913[iParam0 /*37*/].f_1 = 1f;
			}
			Local_913[iParam0 /*37*/].f_9.f_2 = NETWORK::GET_NETWORK_TIME();
			if (iVar8 > 0)
			{
				Local_913[iParam0 /*37*/].f_9.f_4 = 3;
			}
			else if (iVar8 < 0)
			{
				Local_913[iParam0 /*37*/].f_9.f_4 = 2;
			}
			else if (iVar7 < 0)
			{
				Local_913[iParam0 /*37*/].f_9.f_4 = 0;
			}
			else if (iVar7 > 0)
			{
				Local_913[iParam0 /*37*/].f_9.f_4 = 1;
			}
			MISC::CLEAR_BIT(&(Local_152.f_142[iParam0]), true);
			MISC::CLEAR_BIT(&(Local_152.f_142[iParam0]), false);
			Local_913[iParam0 /*37*/].f_9.f_3 = iVar0;
			if (!BitTest(Local_152.f_142[iParam0], 5))
			{
				MISC::SET_BIT(&(Local_152.f_142[iParam0]), 5);
			}
		}
	}
}

int func_294(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	
	if (func_289(iParam0))
	{
		return -1;
	}
	if (!BitTest(Local_152.f_142[iParam0], 5))
	{
		return func_296(Local_913[iParam0 /*37*/].f_6);
	}
	iVar0 = Local_913[iParam0 /*37*/].f_33;
	iVar1 = Local_913[iParam0 /*37*/].f_34;
	func_184(Local_913[iParam0 /*37*/].f_9, &iVar2, &iVar3);
	uVar4 = func_295(iVar2, iVar3, iVar0, iVar1);
	return uVar4;
	return -1;
}

int func_295(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = (iParam2 - iParam0);
	iVar1 = (iParam3 - iParam1);
	if ((((iParam2 < 0 || iParam2 > 13) || iParam3 < 0) || iParam3 > 9) || (iVar0 == 0 && iVar1 == 0))
	{
		return -1;
	}
	if (iVar1 < 0)
	{
		iVar3 = 0;
	}
	else
	{
		iVar3 = 1;
	}
	if (iVar0 < 0)
	{
		iVar2 = 2;
	}
	else
	{
		iVar2 = 3;
	}
	if (MISC::ABSI(iVar0) < MISC::ABSI(iVar1))
	{
		if ((iParam0 % 2) == 0)
		{
			return iVar3;
		}
		else
		{
			return iVar2;
		}
	}
	else if ((iParam1 % 2) == 0)
	{
		return iVar2;
	}
	else
	{
		return iVar3;
	}
	return -1;
}

int func_296(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		
		case 1:
			return 2;
		
		case 2:
			return 3;
		
		case 3:
			return 2;
		
		default:
	}
	return -1;
}

void func_297(int iParam0)
{
	Local_913[iParam0 /*37*/].f_26 = func_308(iParam0);
	Local_913[iParam0 /*37*/].f_28 = func_307(iParam0);
	if (Local_913[iParam0 /*37*/].f_27)
	{
		if (Local_913[iParam0 /*37*/].f_36 != 3 && func_306(iParam0))
		{
			Local_913[iParam0 /*37*/].f_36 = 3;
		}
		else if (Local_913[iParam0 /*37*/].f_36 != 1 && func_305(iParam0))
		{
			Local_913[iParam0 /*37*/].f_36 = 1;
		}
		else if (Local_913[iParam0 /*37*/].f_36 != 2 && func_304(iParam0))
		{
			Local_913[iParam0 /*37*/].f_36 = 2;
		}
		else if (Local_913[iParam0 /*37*/].f_36 != 0 && Local_913[iParam0 /*37*/].f_27)
		{
			Local_913[iParam0 /*37*/].f_36 = 0;
		}
		switch (Local_913[iParam0 /*37*/].f_36)
		{
			case 0:
				func_301(iParam0);
				break;
			
			case 1:
				func_300(iParam0);
				break;
			
			case 2:
				func_299(iParam0);
				break;
			
			case 3:
				func_298(iParam0);
				break;
		}
		if (Local_913[iParam0 /*37*/].f_33 == -1)
		{
			Local_913[iParam0 /*37*/].f_33 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6) * 2;
		}
		if (Local_913[iParam0 /*37*/].f_34 == -1)
		{
			Local_913[iParam0 /*37*/].f_34 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4) * 2;
		}
		Local_913[iParam0 /*37*/].f_27 = 0;
	}
	else if ((Local_913[iParam0 /*37*/].f_9.f_2 + func_183(iParam0)) < NETWORK::GET_NETWORK_TIME() && BitTest(Local_152.f_142[iParam0], 1))
	{
		if (Local_913[iParam0 /*37*/].f_9 == func_71(Local_913[iParam0 /*37*/].f_33, Local_913[iParam0 /*37*/].f_34) || (Local_913[iParam0 /*37*/].f_33 == -1 && Local_913[iParam0 /*37*/].f_34 == -1))
		{
			Local_913[iParam0 /*37*/].f_27 = 1;
		}
	}
}

void func_298(int iParam0)
{
	if (Local_913[iParam0 /*37*/].f_35 == -1)
	{
		Local_913[iParam0 /*37*/].f_35 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	}
	if (Local_913[iParam0 /*37*/].f_35 == iParam0)
	{
		Local_913[iParam0 /*37*/].f_35 = -1;
		return;
	}
	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_913[iParam0 /*37*/].f_35)) && !Local_913[Local_913[iParam0 /*37*/].f_35 /*37*/].f_25)
	{
		Local_913[iParam0 /*37*/].f_35 = -1;
		return;
	}
	if (Local_811[Local_913[iParam0 /*37*/].f_35 /*9*/].f_2 == 0)
	{
		Local_913[iParam0 /*37*/].f_35 = -1;
		return;
	}
	func_184(Local_848[Local_913[iParam0 /*37*/].f_35 /*16*/], &(Local_913[iParam0 /*37*/].f_33), &(Local_913[iParam0 /*37*/].f_34));
}

void func_299(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	func_184(Local_913[iParam0 /*37*/].f_9, &iVar0, &iVar1);
	iVar2 = -1;
	iVar3 = -1;
	iVar4 = -1;
	iVar5 = -1;
	iVar6 = 0;
	iVar6 = 0;
	while (iVar6 <= 6)
	{
		if ((Local_605.f_62[iVar6 /*3*/].f_1 != -1 && Local_605.f_62[iVar6 /*3*/] != -1) && Local_605.f_62[iVar6 /*3*/].f_2 != -2147483647)
		{
			if (Local_605.f_62[iVar6 /*3*/].f_1 == 0)
			{
				func_184(Local_605.f_62[iVar6 /*3*/], &iVar2, &iVar3);
				if ((iVar4 == -1 && iVar5 == -1) || (MISC::ABSI((iVar2 - iVar0)) + MISC::ABSI((iVar3 - iVar1))) < (MISC::ABSI((iVar4 - iVar0)) + MISC::ABSI((iVar5 - iVar1))))
				{
					iVar4 = iVar2;
					iVar5 = iVar3;
				}
			}
		}
		iVar6++;
	}
	if (iVar4 == -1)
	{
		Local_913[iParam0 /*37*/].f_33 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6) * 2;
	}
	if (iVar5 == -1)
	{
		Local_913[iParam0 /*37*/].f_34 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4) * 2;
	}
}

void func_300(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar2 = NETWORK::GET_NETWORK_TIME();
	func_184(Local_913[iParam0 /*37*/].f_9, &iVar0, &iVar1);
	iVar9 = 0;
	while (iVar9 <= 2)
	{
		iVar10 = func_72((Local_605.f_148[iVar9 /*4*/].f_2 == 1 || Local_605.f_148[iVar9 /*4*/].f_2 == 0), 11, 15) * 650;
		if (Local_605.f_148[iVar9 /*4*/].f_3 == -1 || (iVar2 < Local_605.f_148[iVar9 /*4*/] && iVar2 > (Local_605.f_148[iVar9 /*4*/] + iVar10)))
		{
		}
		else
		{
			func_184(Local_605.f_148[iVar9 /*4*/].f_1, &iVar7, &iVar8);
			bVar3 = (bVar3 || iVar7 == iVar0);
			bVar4 = (bVar4 || iVar8 == iVar1);
			bVar5 = (bVar5 || (Local_605.f_148[iVar9 /*4*/].f_2 == 1 && iVar8 == iVar1));
			bVar6 = (bVar6 || (Local_605.f_148[iVar9 /*4*/].f_2 == 2 && iVar7 == iVar0));
		}
		iVar9++;
	}
	if (bVar3)
	{
		if (bVar5)
		{
			if (iVar1 + 2 > 8)
			{
				Local_913[iParam0 /*37*/].f_34 = (iVar1 - 2);
			}
			else
			{
				Local_913[iParam0 /*37*/].f_34 = iVar1 + 2;
			}
		}
		else if ((iVar1 - 2) < 0)
		{
			Local_913[iParam0 /*37*/].f_34 = iVar1 + 2;
		}
		else
		{
			Local_913[iParam0 /*37*/].f_34 = (iVar1 - 2);
		}
	}
	if (bVar4)
	{
		if (bVar6)
		{
			if (iVar0 + 2 > 12)
			{
				Local_913[iParam0 /*37*/].f_33 = (iVar0 - 2);
			}
			else
			{
				Local_913[iParam0 /*37*/].f_33 = iVar0 + 2;
			}
		}
		else if ((iVar0 - 2) < 0)
		{
			Local_913[iParam0 /*37*/].f_33 = iVar0 + 2;
		}
		else
		{
			Local_913[iParam0 /*37*/].f_33 = (iVar0 - 2);
		}
	}
	if (!bVar3 && !bVar4)
	{
		Local_913[iParam0 /*37*/].f_33 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6) * 2;
		Local_913[iParam0 /*37*/].f_34 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4) * 2;
	}
}

void func_301(int iParam0)
{
	int iVar0;
	int iVar1;
	char cVar2[64];
	
	if (Local_913[iParam0 /*37*/].f_29 == -1 && Local_913[iParam0 /*37*/].f_30 == -1)
	{
		func_303(iParam0);
	}
	StringCopy(&cVar2, "", 64);
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		StringCopy(&cVar2, "", 64);
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			StringIntConCat(&cVar2, Local_605[iVar0 /*5*/][iVar1], 64);
			StringConCat(&cVar2, " ", 64);
			iVar0++;
		}
		iVar1++;
	}
	if ((Local_913[iParam0 /*37*/].f_29 != -1 && Local_913[iParam0 /*37*/].f_30 != -1) && Local_605[(Local_913[iParam0 /*37*/].f_29 % 6) /*5*/][(Local_913[iParam0 /*37*/].f_30 % 4)] == Local_913[iParam0 /*37*/].f_6)
	{
		Local_913[iParam0 /*37*/].f_31 = 4;
	}
	if (Local_913[iParam0 /*37*/].f_29 != -1 && Local_913[iParam0 /*37*/].f_30 != -1)
	{
		func_302(iParam0);
	}
}

void func_302(int iParam0)
{
	Local_913[iParam0 /*37*/].f_31++;
	Local_913[iParam0 /*37*/].f_31 = (Local_913[iParam0 /*37*/].f_31 % 6);
	if (Local_913[iParam0 /*37*/].f_31 == 0)
	{
		Local_913[iParam0 /*37*/].f_32 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	}
	else if (Local_913[iParam0 /*37*/].f_31 == 5)
	{
		Local_913[iParam0 /*37*/].f_29 = -1;
		Local_913[iParam0 /*37*/].f_30 = -1;
		Local_913[iParam0 /*37*/].f_33 = Local_913[iParam0 /*37*/].f_29;
		Local_913[iParam0 /*37*/].f_34 = Local_913[iParam0 /*37*/].f_30;
		return;
	}
	switch (((Local_913[iParam0 /*37*/].f_31 + Local_913[iParam0 /*37*/].f_32) % 6))
	{
		case 0:
		case 4:
			Local_913[iParam0 /*37*/].f_33 = (Local_913[iParam0 /*37*/].f_29 * 2 + 1 - 1);
			Local_913[iParam0 /*37*/].f_34 = (Local_913[iParam0 /*37*/].f_30 * 2 + 1 - 1);
			break;
		
		case 1:
			Local_913[iParam0 /*37*/].f_33 = Local_913[iParam0 /*37*/].f_29 * 2 + 1 + 1;
			Local_913[iParam0 /*37*/].f_34 = (Local_913[iParam0 /*37*/].f_30 * 2 + 1 - 1);
			break;
		
		case 2:
			Local_913[iParam0 /*37*/].f_33 = Local_913[iParam0 /*37*/].f_29 * 2 + 1 + 1;
			Local_913[iParam0 /*37*/].f_34 = Local_913[iParam0 /*37*/].f_30 * 2 + 1 + 1;
			break;
		
		case 3:
			Local_913[iParam0 /*37*/].f_33 = (Local_913[iParam0 /*37*/].f_29 * 2 + 1 - 1);
			Local_913[iParam0 /*37*/].f_34 = Local_913[iParam0 /*37*/].f_30 * 2 + 1 + 1;
			break;
		
		case 5:
			break;
	}
}

void func_303(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	func_184(Local_913[iParam0 /*37*/].f_9, &iVar0, &iVar1);
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 6))
	{
		case 5:
			iVar2 = -1;
			iVar3 = -1;
			iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
			iVar5 = 0;
			while (iVar5 <= 3)
			{
				if ((iVar0 % 2) == 1 && (iVar1 % 2) == 0)
				{
					iVar2 = iVar0;
					if (((iVar5 + iVar4) % 2) == 0)
					{
						iVar3 = (iVar1 - 1);
					}
					else
					{
						iVar3 = iVar1 + 1;
					}
				}
				else if ((iVar1 % 2) == 1 && (iVar0 % 2) == 0)
				{
					iVar3 = iVar1;
					if (((iVar5 + iVar4) % 2) == 0)
					{
						iVar2 = (iVar0 - 1);
					}
					else
					{
						iVar2 = iVar0 + 1;
					}
				}
				else if (((iVar5 + iVar4) % 4) == 0)
				{
					iVar2 = (iVar0 - 1);
					iVar3 = (iVar1 - 1);
				}
				else if (((iVar5 + iVar4) % 4) == 1)
				{
					iVar2 = iVar0 + 1;
					iVar3 = (iVar1 - 1);
				}
				else if (((iVar5 + iVar4) % 4) == 2)
				{
					iVar2 = (iVar0 - 1);
					iVar3 = iVar1 + 1;
				}
				else
				{
					iVar2 = iVar0 + 1;
					iVar3 = iVar1 + 1;
				}
				if (iVar2 != -1 && iVar3 != -1)
				{
					if (Local_605[((iVar2 / 2) % 6) /*5*/][((iVar3 / 2) % 4)] != Local_913[iParam0 /*37*/].f_6)
					{
						Local_913[iParam0 /*37*/].f_29 = ((iVar2 / 2) % 6);
						Local_913[iParam0 /*37*/].f_30 = ((iVar3 / 2) % 4);
						return;
					}
				}
				iVar5++;
			}
			break;
		
		case 0:
			iVar7 = 0;
			while (iVar7 <= 3)
			{
				iVar6 = 0;
				while (iVar6 <= 5)
				{
					if (Local_605[((iVar6 + (iVar0 / 2)) % 6) /*5*/][((iVar7 + (iVar1 / 2)) % 4)] != Local_913[iParam0 /*37*/].f_6)
					{
						Local_913[iParam0 /*37*/].f_29 = ((iVar6 + (iVar0 / 2)) % 6);
						Local_913[iParam0 /*37*/].f_30 = ((iVar7 + (iVar1 / 2)) % 4);
						return;
					}
					iVar6++;
				}
				iVar7++;
			}
			break;
		
		case 1:
			iVar6 = 0;
			while (iVar6 <= 5)
			{
				iVar7 = 0;
				while (iVar7 <= 3)
				{
					if (Local_605[((iVar6 + (iVar0 / 2)) % 6) /*5*/][((iVar7 + (iVar1 / 2)) % 4)] != Local_913[iParam0 /*37*/].f_6)
					{
						Local_913[iParam0 /*37*/].f_29 = ((iVar6 + (iVar0 / 2)) % 6);
						Local_913[iParam0 /*37*/].f_30 = ((iVar7 + (iVar1 / 2)) % 4);
						return;
					}
					iVar7++;
				}
				iVar6++;
			}
			break;
		
		case 2:
			iVar6 = 5;
			while (iVar6 <= 0)
			{
				iVar7 = 3;
				while (iVar7 <= 0)
				{
					if (Local_605[((iVar6 + (iVar0 / 2)) % 6) /*5*/][((iVar7 + (iVar1 / 2)) % 4)] != Local_913[iParam0 /*37*/].f_6)
					{
						Local_913[iParam0 /*37*/].f_29 = ((iVar6 + (iVar0 / 2)) % 6);
						Local_913[iParam0 /*37*/].f_30 = ((iVar7 + (iVar1 / 2)) % 4);
						return;
					}
					iVar7++;
				}
				iVar6++;
			}
			break;
		
		case 3:
			iVar7 = 3;
			while (iVar7 <= 0)
			{
				iVar6 = 5;
				while (iVar6 <= 0)
				{
					if (Local_605[((iVar6 + (iVar0 / 2)) % 6) /*5*/][((iVar7 + (iVar1 / 2)) % 4)] != Local_913[iParam0 /*37*/].f_6)
					{
						Local_913[iParam0 /*37*/].f_29 = ((iVar6 + (iVar0 / 2)) % 6);
						Local_913[iParam0 /*37*/].f_30 = ((iVar7 + (iVar1 / 2)) % 4);
						return;
					}
					iVar6++;
				}
				iVar7++;
			}
			break;
		
		case 4:
			Local_913[iParam0 /*37*/].f_29 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
			Local_913[iParam0 /*37*/].f_30 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
			break;
	}
}

bool func_304(int iParam0)
{
	return Local_913[iParam0 /*37*/].f_2 <= 4;
}

int func_305(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	func_184(Local_913[iParam0 /*37*/].f_9, &iVar0, &iVar1);
	iVar4 = 0;
	while (iVar4 <= 2)
	{
		if (Local_605.f_148[iVar4 /*4*/].f_3 == -1)
		{
		}
		else
		{
			func_184(Local_605.f_148[iVar4 /*4*/].f_1, &iVar2, &iVar3);
			if (iVar2 == iVar0 || iVar3 == iVar1)
			{
				return 1;
			}
		}
		iVar4++;
	}
	return 0;
}

var func_306(int iParam0)
{
	return Local_605.f_162;
}

int func_307(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	func_184(Local_913[iParam0 /*37*/].f_9, &iVar0, &iVar1);
	iVar4 = 0;
	while (iVar4 <= 3)
	{
		if (iVar4 != iParam0 && (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar4)) || Local_913[bVar4 /*37*/].f_25))
		{
			func_184(Local_848[bVar4 /*16*/], &iVar2, &iVar3);
			if (iVar2 == iVar0)
			{
				if (iVar3 <= iVar1)
				{
					return 4;
				}
				else if (iVar3 >= iVar1)
				{
					return 5;
				}
			}
			else if (iVar3 == iVar1)
			{
				if (iVar2 <= iVar0)
				{
					return 6;
				}
				else if (iVar2 >= iVar0)
				{
					return 7;
				}
			}
		}
		bVar4++;
	}
	return -1;
}

int func_308(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	func_184(Local_913[iParam0 /*37*/].f_9, &iVar0, &iVar1);
	iVar4 = 0;
	while (iVar4 <= 3)
	{
		if ((iVar4 != iParam0 && (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar4)) || Local_913[bVar4 /*37*/].f_25)) && (Local_811[bVar4 /*9*/].f_2 > 0 || Local_913[bVar4 /*37*/].f_2 > 0))
		{
			func_184(Local_848[bVar4 /*16*/], &iVar2, &iVar3);
			if (iVar2 == iVar0)
			{
				return ((iVar3 <= iVar1 && Local_913[iParam0 /*37*/].f_9.f_4 == 0) || (iVar3 >= iVar1 && Local_913[iParam0 /*37*/].f_9.f_4 == 1));
			}
			else if (iVar3 == iVar1)
			{
				return ((iVar2 <= iVar0 && Local_913[iParam0 /*37*/].f_9.f_4 == 2) || (iVar2 >= iVar0 && Local_913[iParam0 /*37*/].f_9.f_4 == 3));
			}
		}
		bVar4++;
	}
	return 0;
}

void func_309()
{
	func_317();
	func_314();
	func_310();
}

void func_310()
{
	int iVar0;
	var uVar1;
	bool bVar2;
	
	if (Local_811[Local_152.f_178 /*9*/].f_5 == 0)
	{
		return;
	}
	iVar0 = func_312();
	bVar2 = false;
	if (iVar0 != -1)
	{
		bVar2 = func_311(Local_848[Local_152.f_178 /*16*/].f_4);
	}
	if (bVar2)
	{
		if (NETWORK::GET_NETWORK_TIME() < (Local_152.f_178.f_3 + Local_152.f_59[Local_811[Local_152.f_178 /*9*/].f_5 /*5*/].f_3))
		{
			return;
		}
		uVar1 = Local_848[Local_152.f_178 /*16*/].f_4;
		Local_848[Local_152.f_178 /*16*/].f_5[Local_152.f_307 /*5*/] = NETWORK::GET_NETWORK_TIME();
		Local_848[Local_152.f_178 /*16*/].f_5[Local_152.f_307 /*5*/].f_3 = uVar1;
		Local_848[Local_152.f_178 /*16*/].f_5[Local_152.f_307 /*5*/].f_4 = Local_811[Local_152.f_178 /*9*/].f_5;
		Local_848[Local_152.f_178 /*16*/].f_5[Local_152.f_307 /*5*/].f_1 = { Local_152.f_204[Local_152.f_178 /*19*/] };
		Local_848[Local_152.f_178 /*16*/].f_4 = uVar1;
		Local_152.f_178.f_3 = NETWORK::GET_NETWORK_TIME();
		Local_152.f_307++;
		if (Local_152.f_307 >= 2)
		{
			Local_152.f_307 = 0;
		}
		PAD::SET_PAD_SHAKE(0, 50, 100);
	}
}

int func_311(int iParam0)
{
	struct<2> Var0;
	struct<2> Var2;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	Var0 = { func_187(func_71(12, 8)) };
	Var2 = { func_187(func_71(0, 0)) };
	switch (iParam0)
	{
		case 0:
			if (func_258(Local_152.f_204[Local_152.f_178 /*19*/].f_1, (Var2.f_1 - 0.0001f), (Var2.f_1 + 0.0001f)))
			{
				return 0;
			}
			break;
		
		case 1:
			if (func_258(Local_152.f_204[Local_152.f_178 /*19*/].f_1, (Var0.f_1 - 0.0001f), (Var0.f_1 + 0.0001f)))
			{
				return 0;
			}
			break;
		
		case 2:
			if (func_258(Local_152.f_204[Local_152.f_178 /*19*/], (Var2.f_0 - 0.0001f), (Var2.f_0 + 0.0001f)))
			{
				return 0;
			}
			break;
		
		case 3:
			if (func_258(Local_152.f_204[Local_152.f_178 /*19*/], (Var0.f_0 - 0.0001f), (Var0.f_0 + 0.0001f)))
			{
				return 0;
			}
			break;
	}
	func_184(Local_848[Local_152.f_178 /*16*/], &iVar4, &iVar5);
	func_184(Local_848[Local_152.f_178 /*16*/].f_1, &iVar6, &iVar7);
	if (Local_848[Local_152.f_178 /*16*/].f_2 + func_183(Local_152.f_178)) > NETWORK::GET_NETWORK_TIME()
	{
		if (iVar5 != iVar7)
		{
			if (iParam0 == 2 || iParam0 == 3)
			{
				return 0;
			}
		}
		else if (iVar4 != iVar6)
		{
			if (iParam0 == 0 || iParam0 == 1)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_312()
{
	int iVar0;
	
	if (func_313())
	{
		return -1;
	}
	iVar0 = 229;
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		iVar0 = 203;
	}
	if (PAD::IS_DISABLED_CONTROL_PRESSED(2, iVar0))
	{
		return 8;
	}
	return -1;
}

int func_313()
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 1;
	}
	if (Local_811[Local_152.f_178 /*9*/] != 2)
	{
		return 1;
	}
	return 0;
}

void func_314()
{
	int iVar0;
	bool bVar1;
	
	iVar0 = func_316();
	bVar1 = func_315(Local_152.f_178, iVar0);
	if (bVar1)
	{
		switch (iVar0)
		{
			case 4:
				Local_848[Local_152.f_178 /*16*/].f_4 = 0;
				break;
			
			case 5:
				Local_848[Local_152.f_178 /*16*/].f_4 = 1;
				break;
			
			case 6:
				Local_848[Local_152.f_178 /*16*/].f_4 = 2;
				break;
			
			case 7:
				Local_848[Local_152.f_178 /*16*/].f_4 = 3;
				break;
			}
	}
}

int func_315(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	func_184(Local_848[Local_152.f_178 /*16*/], &iVar0, &iVar1);
	func_184(Local_848[Local_152.f_178 /*16*/].f_1, &iVar2, &iVar3);
	switch (iParam1)
	{
		case 4:
		case 5:
			if ((iVar0 % 2) != 0)
			{
				return 0;
			}
			break;
		
		case 6:
		case 7:
			if ((iVar1 % 2) != 0)
			{
				return 0;
			}
			break;
	}
	if (Local_848[Local_152.f_178 /*16*/].f_2 + func_183(iParam0)) > NETWORK::GET_NETWORK_TIME()
	{
		if (iVar1 != iVar3)
		{
			if (iParam1 == 6 || iParam1 == 7)
			{
				return 0;
			}
		}
		else if (iVar0 != iVar2)
		{
			if (iParam1 == 4 || iParam1 == 5)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_316()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	
	if (func_313())
	{
		return -1;
	}
	iVar0 = 361;
	iVar1 = 361;
	iVar2 = 361;
	iVar3 = 361;
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		iVar0 = 188;
		iVar1 = 187;
		iVar2 = 189;
		iVar3 = 190;
	}
	fVar4 = 0f;
	if (!PAD::_IS_USING_KEYBOARD(2))
	{
		fVar4 = PAD::GET_DISABLED_CONTROL_NORMAL(2, 221);
	}
	if (fVar4 < -0.65f || (iVar0 != 361 && PAD::IS_DISABLED_CONTROL_PRESSED(2, iVar0)))
	{
		return 4;
	}
	if (fVar4 > 0.65f || (iVar1 != 361 && PAD::IS_DISABLED_CONTROL_PRESSED(2, iVar1)))
	{
		return 5;
	}
	fVar5 = PAD::GET_DISABLED_CONTROL_NORMAL(2, 220);
	if (fVar5 < -0.65f || (iVar2 != 361 && PAD::IS_DISABLED_CONTROL_PRESSED(2, iVar2)))
	{
		return 6;
	}
	if (fVar5 > 0.65f || (iVar3 != 361 && PAD::IS_DISABLED_CONTROL_PRESSED(2, iVar3)))
	{
		return 7;
	}
	return -1;
}

void func_317()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = func_318();
	bVar1 = false;
	if (((!((Local_848[Local_152.f_178 /*16*/].f_2 + func_183(Local_152.f_178)) < NETWORK::GET_NETWORK_TIME() && BitTest(Local_152.f_141, 1)) && NETWORK::GET_NETWORK_TIME() < Local_848[Local_152.f_178 /*16*/].f_2 + 100) && Local_848[Local_152.f_178 /*16*/].f_3 != iVar0) && !BitTest(Local_152.f_141, 4))
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		func_184(Local_848[Local_152.f_178 /*16*/].f_1, &iVar2, &iVar3);
		func_184(Local_848[Local_152.f_178 /*16*/].f_1, &iVar4, &iVar5);
	}
	else
	{
		func_184(Local_848[Local_152.f_178 /*16*/], &iVar2, &iVar3);
		func_184(Local_848[Local_152.f_178 /*16*/].f_1, &iVar4, &iVar5);
	}
	bVar6 = false;
	iVar7 = 0;
	iVar8 = 0;
	switch (iVar0)
	{
		case 0:
			bVar6 = (iVar3 > 0 && (iVar2 % 2) == 0);
			iVar7 = -1;
			break;
		
		case 1:
			bVar6 = (iVar3 < 8 && (iVar2 % 2) == 0);
			iVar7 = 1;
			break;
		
		case 2:
			bVar6 = (iVar2 > 0 && (iVar3 % 2) == 0);
			iVar8 = -1;
			break;
		
		case 3:
			bVar6 = (iVar2 < 12 && (iVar3 % 2) == 0);
			iVar8 = 1;
			break;
	}
	if (bVar6)
	{
		if (((Local_848[Local_152.f_178 /*16*/].f_2 + func_183(Local_152.f_178)) < NETWORK::GET_NETWORK_TIME() && BitTest(Local_152.f_141, 1)) || bVar1)
		{
			if (bVar1 || !BitTest(Local_152.f_141, 5))
			{
				MISC::SET_BIT(&(Local_152.f_141), 4);
			}
			if (iVar4 != iVar2)
			{
				iVar4 = iVar2;
			}
			if (iVar5 != iVar3)
			{
				iVar5 = iVar3;
			}
			if (iVar8 != 0)
			{
				iVar2 = (iVar2 + iVar8);
			}
			if (iVar7 != 0)
			{
				iVar3 = (iVar3 + iVar7);
			}
			Local_848[Local_152.f_178 /*16*/] = func_71(iVar2, iVar3);
			Local_848[Local_152.f_178 /*16*/].f_1 = func_71(iVar4, iVar5);
			if (Local_152.f_178.f_2 > 0)
			{
				Local_811[Local_152.f_178 /*9*/].f_1 = 0.75f;
				Local_152.f_178.f_2 = (Local_152.f_178.f_2 - 1);
			}
			else if (!func_258(Local_811[Local_152.f_178 /*9*/].f_1, (1f - 0.0001f), (1f + 0.0001f)))
			{
				Local_811[Local_152.f_178 /*9*/].f_1 = 1f;
			}
			Local_848[Local_152.f_178 /*16*/].f_2 = NETWORK::GET_NETWORK_TIME();
			if (iVar8 > 0)
			{
				Local_848[Local_152.f_178 /*16*/].f_4 = 3;
			}
			else if (iVar8 < 0)
			{
				Local_848[Local_152.f_178 /*16*/].f_4 = 2;
			}
			else if (iVar7 < 0)
			{
				Local_848[Local_152.f_178 /*16*/].f_4 = 0;
			}
			else if (iVar7 > 0)
			{
				Local_848[Local_152.f_178 /*16*/].f_4 = 1;
			}
			MISC::CLEAR_BIT(&(Local_152.f_141), true);
			MISC::CLEAR_BIT(&(Local_152.f_141), false);
			Local_848[Local_152.f_178 /*16*/].f_3 = iVar0;
			if (!BitTest(Local_152.f_141, 5))
			{
				MISC::SET_BIT(&(Local_152.f_141), 5);
			}
		}
	}
}

int func_318()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	
	if (func_313())
	{
		return -1;
	}
	if (!BitTest(Local_152.f_141, 5))
	{
		return func_296(Local_811[Local_152.f_178 /*9*/].f_6);
	}
	iVar0 = 361;
	iVar1 = 361;
	iVar2 = 361;
	iVar3 = 361;
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		iVar0 = 361;
		iVar1 = 361;
		iVar2 = 361;
		iVar3 = 361;
	}
	fVar4 = PAD::GET_DISABLED_CONTROL_NORMAL(2, 219);
	if (fVar4 < -0.65f || (iVar0 != 361 && PAD::IS_DISABLED_CONTROL_PRESSED(2, iVar0)))
	{
		return 0;
	}
	if (fVar4 > 0.65f || (iVar1 != 361 && PAD::IS_DISABLED_CONTROL_PRESSED(2, iVar1)))
	{
		return 1;
	}
	fVar5 = PAD::GET_DISABLED_CONTROL_NORMAL(2, 218);
	if (fVar5 < -0.65f || (iVar2 != 361 && PAD::IS_DISABLED_CONTROL_PRESSED(2, iVar2)))
	{
		return 2;
	}
	if (fVar5 > 0.65f || (iVar3 != 361 && PAD::IS_DISABLED_CONTROL_PRESSED(2, iVar3)))
	{
		return 3;
	}
	return -1;
}

void func_319()
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_in_menus_scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("dlc_vw_am_tw_in_menus_scene");
	}
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_in_gameplay_scene"))
	{
		AUDIO::START_AUDIO_SCENE("dlc_vw_am_tw_in_gameplay_scene");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_vehicle_drivethrough_scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("dlc_vw_am_tw_vehicle_drivethrough_scene");
	}
	func_169("Ambience", &(Local_152.f_428), func_108(-1f, -1f), 0);
	func_281();
	func_273();
	func_171();
	func_320();
	if (NETWORK::GET_NETWORK_TIME() < Local_605.f_146)
	{
		return;
	}
	if (!BitTest(Local_152.f_417, 1))
	{
		MISC::SET_BIT(&(Local_152.f_417), true);
		func_151("SCGW_H_MOVE", 7500, 0);
	}
	func_168(4);
	func_18(func_19(1));
	func_15(7);
}

void func_320()
{
	func_124();
	func_188();
	func_182();
	if ((Local_605.f_146 - NETWORK::GET_NETWORK_TIME()) <= 4500)
	{
		func_214();
	}
	func_198();
	func_175();
	func_104();
	func_103();
}

void func_321()
{
	int iVar0;
	
	func_326();
	func_171();
	if (Local_605.f_145 <= 2)
	{
		return;
	}
	func_324();
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (iVar0 != Local_152.f_178 && Local_913[iVar0 /*37*/].f_25)
		{
			func_322(iVar0);
		}
		iVar0++;
	}
	func_168(3);
	func_15(6);
}

void func_322(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_323(iParam0);
	Local_913[iParam0 /*37*/].f_2 = 8;
	func_230(iParam0, 2);
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		Local_913[iParam0 /*37*/].f_9.f_5[iVar0 /*5*/] = -2147483647;
		Local_913[iParam0 /*37*/].f_9.f_5[iVar0 /*5*/].f_1 = -1f;
		Local_913[iParam0 /*37*/].f_9.f_5[iVar0 /*5*/].f_1.f_1 = -1f;
		Local_913[iParam0 /*37*/].f_9.f_5[iVar0 /*5*/].f_3 = -1;
		Local_913[iParam0 /*37*/].f_9.f_5[iVar0 /*5*/].f_4 = -1;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Local_152.f_204[iVar1 /*19*/].f_10[iVar0 /*4*/].f_2 = { func_108(-1f, -1f) };
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Local_152.f_380[iVar0 /*5*/][iVar1] = -2147483647;
			Local_152.f_349[iVar0 /*5*/][iVar1] = -1;
			Local_152.f_318[iVar0 /*5*/][iVar1] = -1;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Local_152.f_204[iVar0 /*19*/].f_9 = 8;
		iVar0++;
	}
	Local_152.f_437 = -2147483647;
	Local_152.f_439 = { func_108(0f, 0f) };
	MISC::SET_BIT(&(Local_152.f_142[iParam0]), true);
	MISC::SET_BIT(&(Local_152.f_142[iParam0]), false);
	MISC::CLEAR_BIT(&(Local_152.f_142[iParam0]), 2);
	MISC::CLEAR_BIT(&(Local_152.f_142[iParam0]), 5);
	func_96(&(Local_152.f_316));
	Local_913[iParam0 /*37*/].f_4 = -2147483647;
	Local_913[iParam0 /*37*/].f_1 = 1f;
	Local_152.f_178.f_2 = 0;
	Local_152.f_308 = 0;
	Local_152.f_307 = 0;
	Local_152.f_429 = 0;
	Local_913[iParam0 /*37*/].f_5 = 0;
}

void func_323(int iParam0)
{
	Local_913[iParam0 /*37*/].f_9 = func_71(Local_152.f_9[Local_913[iParam0 /*37*/].f_6 /*3*/][0], Local_152.f_9[Local_913[iParam0 /*37*/].f_6 /*3*/][1]);
	Local_913[iParam0 /*37*/].f_9.f_1 = Local_913[iParam0 /*37*/].f_9;
	if (Local_152.f_9[Local_913[iParam0 /*37*/].f_6 /*3*/][1] == 0)
	{
		Local_913[iParam0 /*37*/].f_9.f_4 = 1;
	}
	else
	{
		Local_913[iParam0 /*37*/].f_9.f_4 = 0;
	}
}

void func_324()
{
	int iVar0;
	int iVar1;
	var uVar2[4];
	
	func_325();
	Local_811[Local_152.f_178 /*9*/].f_2 = 8;
	func_236(2);
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		Local_848[Local_152.f_178 /*16*/].f_5[iVar0 /*5*/] = -2147483647;
		Local_848[Local_152.f_178 /*16*/].f_5[iVar0 /*5*/].f_1 = -1f;
		Local_848[Local_152.f_178 /*16*/].f_5[iVar0 /*5*/].f_1.f_1 = -1f;
		Local_848[Local_152.f_178 /*16*/].f_5[iVar0 /*5*/].f_3 = -1;
		Local_848[Local_152.f_178 /*16*/].f_5[iVar0 /*5*/].f_4 = -1;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Local_152.f_204[iVar1 /*19*/].f_10[iVar0 /*4*/].f_2 = { func_108(-1f, -1f) };
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Local_152.f_380[iVar0 /*5*/][iVar1] = -2147483647;
			Local_152.f_349[iVar0 /*5*/][iVar1] = -1;
			Local_152.f_318[iVar0 /*5*/][iVar1] = -1;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Local_152.f_204[iVar0 /*19*/].f_9 = 8;
		iVar0++;
	}
	Local_152.f_437 = -2147483647;
	Local_152.f_439 = { func_108(0f, 0f) };
	MISC::SET_BIT(&(Local_152.f_141), true);
	MISC::SET_BIT(&(Local_152.f_141), false);
	MISC::CLEAR_BIT(&(Local_152.f_141), 2);
	MISC::CLEAR_BIT(&(Local_152.f_141), 5);
	func_96(&(Local_152.f_316));
	Local_811[Local_152.f_178 /*9*/].f_4 = -2147483647;
	Local_811[Local_152.f_178 /*9*/].f_1 = 1f;
	func_119(Local_811[Local_152.f_178 /*9*/].f_7, &uVar2);
	uVar2[3] = Local_811[Local_152.f_178 /*9*/].f_6;
	Local_811[Local_152.f_178 /*9*/].f_7 = func_131(&uVar2);
	Local_152.f_178.f_2 = 0;
	Local_152.f_308 = 0;
	Local_152.f_307 = 0;
	Local_152.f_429 = 0;
	Local_811[Local_152.f_178 /*9*/].f_5 = 0;
}

void func_325()
{
	Local_848[Local_152.f_178 /*16*/] = func_71(Local_152.f_9[Local_811[Local_152.f_178 /*9*/].f_6 /*3*/][0], Local_152.f_9[Local_811[Local_152.f_178 /*9*/].f_6 /*3*/][1]);
	Local_848[Local_152.f_178 /*16*/].f_1 = Local_848[Local_152.f_178 /*16*/];
	if (Local_152.f_9[Local_811[Local_152.f_178 /*9*/].f_6 /*3*/][1] == 0)
	{
		Local_848[Local_152.f_178 /*16*/].f_4 = 1;
	}
	else
	{
		Local_848[Local_152.f_178 /*16*/].f_4 = 0;
	}
}

void func_326()
{
	func_124();
	func_188();
	func_181(Local_152.f_107.f_25, 153);
	func_175();
	func_104();
	func_103();
}

void func_327()
{
	func_326();
	func_171();
	if (Local_605.f_145 <= 1)
	{
		return;
	}
	Local_130.f_16 = Local_152.f_148;
	func_15(5);
}

void func_328()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	func_332();
	iVar0 = 199;
	iVar1 = 225;
	iVar2 = 193;
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		iVar0 = 201;
		iVar1 = 214;
	}
	if (NETWORK::GET_NETWORK_TIME() > Local_152.f_441 + 500)
	{
		if (Local_811[Local_152.f_178 /*9*/] != 1)
		{
			if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, iVar0))
			{
				func_16();
				func_163(1);
				func_236(1);
				func_133("Frontend_Ready");
				Local_152.f_441 = NETWORK::GET_NETWORK_TIME();
			}
			if (Local_152.f_452)
			{
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, iVar2))
				{
					iVar3 = 0;
					while (iVar3 <= 3)
					{
						if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar3)) && !Local_913[bVar3 /*37*/].f_25)
						{
							Local_913[bVar3 /*37*/].f_6 = func_331();
							Local_913[bVar3 /*37*/].f_25 = 1;
							Local_913[bVar3 /*37*/] = 1;
						}
						else
						{
							bVar3++;
						}
					}
				}
			}
		}
		if (Local_811[Local_152.f_178 /*9*/] == 1)
		{
			if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, iVar1))
			{
				func_16();
				func_236(0);
				func_133("Frontend_Unready");
				Local_152.f_441 = NETWORK::GET_NETWORK_TIME();
			}
		}
	}
	func_330();
	if (Local_605.f_145 >= 2)
	{
		func_15(4);
		func_133("Frontend_Start_Game");
		func_329(1);
	}
}

void func_329(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Local_130, "Street Crime: Gang Wars Edition.", 64);
	}
	else
	{
		StringCopy(&Local_130, "Invade and Persuade II.", 64);
	}
	Local_130.f_16 = 0;
	Local_130.f_17 = 0;
	Local_130.f_18 = 0;
	Local_130.f_19 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	Local_130.f_20 = 0;
	Local_130.f_21 = 0;
}

void func_330()
{
	struct<3> Var0;
	
	MISC::SET_BIT(&(Local_152.f_417), false);
	if (Local_811[Local_152.f_178 /*9*/] == 1)
	{
		StringCopy(&Var0, "SCGW_H_RDY1", 24);
	}
	else
	{
		StringCopy(&Var0, "SCGW_H_RDY0", 24);
		if (Local_152.f_178.f_1 && Local_152.f_452)
		{
			StringConCat(&Var0, "_H", 24);
		}
		if (func_149())
		{
			StringConCat(&Var0, "_PS4", 24);
		}
	}
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		StringConCat(&Var0, "_PC", 24);
	}
	if (func_128(&Var0))
	{
		return;
	}
	func_16();
	func_126(&Var0);
}

int func_331()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		bVar2 = true;
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			if (Local_811[iVar0 /*9*/].f_6 == iVar1 && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
			{
				bVar2 = false;
			}
			if (Local_913[bVar0 /*37*/].f_6 == iVar1)
			{
				bVar2 = false;
			}
			bVar0++;
		}
		if (bVar2)
		{
			return iVar1;
		}
		iVar1++;
	}
	return -1;
}

void func_332()
{
	int iVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	
	func_124();
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_139(iVar0, 0);
		if (Local_152.f_149[iVar0] != -1 && Local_811[Local_152.f_149[iVar0] /*9*/] == 1)
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 != Local_152.f_148)
	{
		if (Local_811[Local_152.f_178 /*9*/] == 1)
		{
			StringCopy(&cVar2, "SCGW_WFP", 16);
		}
		else
		{
			StringCopy(&cVar2, "SCGW_PS", 16);
		}
		iVar6 = SYSTEM::ROUND((SYSTEM::SIN((SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) * 0.5058f)) * 255f));
		if (iVar6 > 51)
		{
			iVar6 = 255;
		}
		else
		{
			iVar6 = 0;
		}
		HUD::SET_TEXT_SCALE(0.65f, 0.65f);
		HUD::SET_TEXT_COLOUR(255, 255, 255, iVar6);
		HUD::SET_TEXT_DROP_SHADOW();
		HUD::SET_TEXT_CENTRE(true);
		HUD::SET_TEXT_FONT(7);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&cVar2);
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_122(0.5f), 0.885f, 0);
	}
	func_104();
	func_103();
}

void func_333()
{
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_in_menus_scene"))
	{
		AUDIO::START_AUDIO_SCENE("dlc_vw_am_tw_in_menus_scene");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_in_gameplay_scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("dlc_vw_am_tw_in_gameplay_scene");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_vehicle_drivethrough_scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("dlc_vw_am_tw_vehicle_drivethrough_scene");
	}
	func_124();
	GRAPHICS::_DRAW_BINK_MOVIE(Local_152.f_427, 0.5f, 0.5f, (1f * fLocal_127), 1f, 0f, 255, 255, 255, 255);
	if (GRAPHICS::_GET_BINK_MOVIE_TIME(Local_152.f_427) >= 30f && !BitTest(Local_152.f_141, 3))
	{
		MISC::SET_BIT(&(Local_152.f_141), 3);
		func_18(func_19(0));
	}
	if (GRAPHICS::_GET_BINK_MOVIE_TIME(Local_152.f_427) >= 99f)
	{
		GRAPHICS::_STOP_BINK_MOVIE(Local_152.f_427);
		GRAPHICS::_RELEASE_BINK_MOVIE(Local_152.f_427);
		func_15(3);
		Local_152.f_154[Local_811[Local_152.f_178 /*9*/].f_6] = NETWORK::GET_NETWORK_TIME();
		func_168(2);
	}
	func_104();
	func_103();
}

void func_334()
{
	if (!func_335())
	{
		return;
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPArcadeCabinetGrid", false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPArcadeCabinetGrid"))
	{
		return;
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPArcadeCabinetGridPlayerYellow", false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPArcadeCabinetGridPlayerYellow"))
	{
		return;
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPArcadeCabinetGridPlayerPurple", false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPArcadeCabinetGridPlayerPurple"))
	{
		return;
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPArcadeCabinetGridPlayerGreen", false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPArcadeCabinetGridPlayerGreen"))
	{
		return;
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPArcadeCabinetGridPlayerBlue", false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPArcadeCabinetGridPlayerBlue"))
	{
		return;
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPArcadeCabinetGridTiles", false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPArcadeCabinetGridTiles"))
	{
		return;
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPArcadeCabinetGridHUD", false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPArcadeCabinetGridHUD"))
	{
		return;
	}
	HUD::REQUEST_ADDITIONAL_TEXT("SCGW", 3);
	if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("SCGW", 3))
	{
		return;
	}
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_VINEWOOD/DLC_VW_AM_TW", false, -1))
	{
		return;
	}
	func_15(2);
	GRAPHICS::_PLAY_BINK_MOVIE(Local_152.f_427);
	GRAPHICS::_SET_BINK_SHOULD_SKIP(Local_152.f_427, true);
	func_133("Frontend_Degenatron_Screen");
}

bool func_335()
{
	return ((((((func_336(0) && func_336(6)) && func_336(1)) && func_336(3)) && func_336(4)) && func_336(5)) && func_336(7));
}

int func_336(int iParam0)
{
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(func_109(iParam0), false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(func_109(iParam0)))
	{
		return 0;
	}
	return 1;
}

void func_337()
{
	int iVar0;
	int iVar1;
	
	if (Local_605.f_145 > 1)
	{
		if (func_355(PLAYER::PLAYER_ID()))
		{
			Local_152.f_443.f_4 = 0;
			Local_152.f_443.f_3 = 0;
			func_354(&(Local_152.f_443), 11);
		}
		func_15(11);
		return;
	}
	func_345();
	func_344(0);
	func_343();
	func_342();
	func_341();
	func_340();
	func_339();
	func_338();
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Local_152.f_380[iVar0 /*5*/][iVar1] = -2147483647;
			Local_152.f_349[iVar0 /*5*/][iVar1] = -1;
			Local_152.f_318[iVar0 /*5*/][iVar1] = -1;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Local_152.f_154[iVar0] = -2147483647;
		iVar0++;
	}
	Local_152.f_427 = GRAPHICS::_SET_BINK_MOVIE("DegenSting_StreetCrime_1920x1080_auto");
	func_15(1);
}

void func_338()
{
	Local_152.f_59[0 /*5*/] = "";
	Local_152.f_59[0 /*5*/].f_2 = 0;
	Local_152.f_59[0 /*5*/].f_4 = 0;
	Local_152.f_59[0 /*5*/].f_3 = 0;
	Local_152.f_59[0 /*5*/].f_1 = 0;
	Local_152.f_59[1 /*5*/] = "gun_";
	Local_152.f_59[1 /*5*/].f_2 = 2;
	Local_152.f_59[1 /*5*/].f_4 = 2;
	Local_152.f_59[1 /*5*/].f_3 = 700;
	Local_152.f_59[1 /*5*/].f_1 = 300;
	Local_152.f_59[2 /*5*/] = "uzi_";
	Local_152.f_59[2 /*5*/].f_2 = 1;
	Local_152.f_59[2 /*5*/].f_4 = 1;
	Local_152.f_59[2 /*5*/].f_3 = 325;
	Local_152.f_59[2 /*5*/].f_1 = 300;
	Local_152.f_59[3 /*5*/] = "rifle_";
	Local_152.f_59[3 /*5*/].f_2 = 3;
	Local_152.f_59[3 /*5*/].f_4 = 2;
	Local_152.f_59[3 /*5*/].f_3 = 650;
	Local_152.f_59[3 /*5*/].f_1 = 200;
	Local_152.f_59[4 /*5*/] = "rocket_";
	Local_152.f_59[4 /*5*/].f_2 = 5;
	Local_152.f_59[4 /*5*/].f_4 = 8;
	Local_152.f_59[4 /*5*/].f_3 = 2000;
	Local_152.f_59[4 /*5*/].f_1 = 525;
	Local_152.f_59[5 /*5*/] = "shotgun_";
	Local_152.f_59[5 /*5*/].f_2 = 2;
	Local_152.f_59[5 /*5*/].f_4 = 4;
	Local_152.f_59[5 /*5*/].f_3 = 1000;
	Local_152.f_59[5 /*5*/].f_1 = 300;
}

void func_339()
{
	Local_152.f_90[0 /*2*/] = "heart_anim_";
	Local_152.f_90[0 /*2*/].f_1 = 10;
	Local_152.f_90[1 /*2*/] = "speed_anim_";
	Local_152.f_90[1 /*2*/].f_1 = 10;
	Local_152.f_90[2 /*2*/] = "phone_anim_";
	Local_152.f_90[2 /*2*/].f_1 = 10;
	Local_152.f_90[3 /*2*/] = "icon_pistol";
	Local_152.f_90[3 /*2*/].f_1 = 0;
	Local_152.f_90[4 /*2*/] = "icon_uzi";
	Local_152.f_90[4 /*2*/].f_1 = 0;
	Local_152.f_90[5 /*2*/] = "icon_rifle";
	Local_152.f_90[5 /*2*/].f_1 = 0;
	Local_152.f_90[6 /*2*/] = "icon_rocket_launcher";
	Local_152.f_90[6 /*2*/].f_1 = 0;
	Local_152.f_90[7 /*2*/] = "icon_shotgun";
	Local_152.f_90[7 /*2*/].f_1 = 0;
}

void func_340()
{
	Local_152.f_22[0 /*4*/] = "ice_cream_van_";
	Local_152.f_22[0 /*4*/].f_1 = 1;
	Local_152.f_22[0 /*4*/].f_2 = 0.033333f;
	Local_152.f_22[0 /*4*/].f_2.f_1 = 0.02963f;
	Local_152.f_22[1 /*4*/] = "ambulance_";
	Local_152.f_22[1 /*4*/].f_1 = 2;
	Local_152.f_22[1 /*4*/].f_2 = 0.035417f;
	Local_152.f_22[1 /*4*/].f_2.f_1 = 0.02963f;
	Local_152.f_22[2 /*4*/] = "police_";
	Local_152.f_22[2 /*4*/].f_1 = 2;
	Local_152.f_22[2 /*4*/].f_2 = 0.033333f;
	Local_152.f_22[2 /*4*/].f_2.f_1 = 0.025926f;
	Local_152.f_22[3 /*4*/] = "fire_truck_";
	Local_152.f_22[3 /*4*/].f_1 = 2;
	Local_152.f_22[3 /*4*/].f_2 = 0.045833f;
	Local_152.f_22[3 /*4*/].f_2.f_1 = 0.02963f;
	Local_152.f_22[4 /*4*/] = "tank_";
	Local_152.f_22[4 /*4*/].f_1 = 1;
	Local_152.f_22[4 /*4*/].f_2 = 0.041667f;
	Local_152.f_22[4 /*4*/].f_2.f_1 = 0.025926f;
	Local_152.f_22[5 /*4*/] = "gang_car_green";
	Local_152.f_22[5 /*4*/].f_1 = 1;
	Local_152.f_22[5 /*4*/].f_2 = 0.033333f;
	Local_152.f_22[5 /*4*/].f_2.f_1 = 0.059259f;
	Local_152.f_22[6 /*4*/] = "gang_car_purple";
	Local_152.f_22[6 /*4*/].f_1 = 1;
	Local_152.f_22[6 /*4*/].f_2 = 0.033333f;
	Local_152.f_22[6 /*4*/].f_2.f_1 = 0.059259f;
	Local_152.f_22[7 /*4*/] = "gang_car_yellow";
	Local_152.f_22[7 /*4*/].f_1 = 1;
	Local_152.f_22[7 /*4*/].f_2 = 0.033333f;
	Local_152.f_22[7 /*4*/].f_2.f_1 = 0.059259f;
	Local_152.f_22[8 /*4*/] = "gang_car_blue";
	Local_152.f_22[8 /*4*/].f_1 = 1;
	Local_152.f_22[8 /*4*/].f_2 = 0.033333f;
	Local_152.f_22[8 /*4*/].f_2.f_1 = 0.059259f;
}

void func_341()
{
	Local_152.f_422[0] = "green";
	Local_152.f_422[1] = "purple";
	Local_152.f_422[2] = "yellow";
	Local_152.f_422[3] = "blue";
}

void func_342()
{
	func_213(&(Local_152.f_107[0 /*4*/]), 78, 187, 30, 255);
	func_213(&(Local_152.f_107[1 /*4*/]), 171, 0, 255, 255);
	func_213(&(Local_152.f_107[2 /*4*/]), 255, 228, 0, 255);
	func_213(&(Local_152.f_107[3 /*4*/]), 35, 92, 255, 255);
	func_213(&(Local_152.f_107.f_29), 221, 21, 10, 255);
	func_213(&(Local_152.f_107.f_17), 255, 255, 255, 255);
	func_213(&(Local_152.f_107.f_21), 55, 55, 55, 255);
	func_213(&(Local_152.f_107.f_25), 0, 0, 0, 255);
}

void func_343()
{
	Local_152[0 /*2*/] = { func_108(0.170833f, (0.909259f - 0.019444f)) };
	Local_152[1 /*2*/] = { func_108(0.170833f, (0.109259f + 0.019444f)) };
	Local_152[2 /*2*/] = { func_108(0.829167f, (0.109259f + 0.019444f)) };
	Local_152[3 /*2*/] = { func_108(0.829167f, (0.909259f - 0.019444f)) };
	Local_152.f_9[0 /*3*/][0] = 1;
	Local_152.f_9[0 /*3*/][1] = 2;
	Local_152.f_9[1 /*3*/][0] = 11;
	Local_152.f_9[1 /*3*/][1] = 2;
	Local_152.f_9[2 /*3*/][0] = 1;
	Local_152.f_9[2 /*3*/][1] = 6;
	Local_152.f_9[3 /*3*/][0] = 11;
	Local_152.f_9[3 /*3*/][1] = 6;
}

void func_344(int iParam0)
{
	Local_1062.f_137 = iParam0;
	func_213(&(Local_1062[0 /*17*/].f_9), 255, 255, 255, 255);
	Local_1062[1 /*17*/].f_6 = 1000;
	Local_1062[1 /*17*/].f_7 = 10000;
	Local_1062[2 /*17*/].f_1 = 1;
	Local_1062[2 /*17*/].f_8 = 40;
	func_213(&(Local_1062[2 /*17*/].f_9), 0, 0, 0, 0);
	func_213(&(Local_1062[3 /*17*/].f_9), 255, 255, 255, 127);
	func_213(&(Local_1062[4 /*17*/].f_9), 255, 255, 255, 127);
	func_213(&(Local_1062[5 /*17*/].f_9), 255, 255, 255, 127);
	func_213(&(Local_1062[7 /*17*/].f_9), 255, 255, 255, 255);
	switch (Local_1062.f_137)
	{
		case 2:
			func_213(&(Local_1062[6 /*17*/].f_9), 255, 255, 255, 30);
			func_213(&(Local_1062[1 /*17*/].f_9), 255, 255, 255, 20);
			func_213(&(Local_1062[2 /*17*/].f_13), 0, 0, 0, 30);
			func_213(&(Local_1062[4 /*17*/].f_9), 255, 255, 255, 127);
			Local_1062[0 /*17*/] = 1;
			Local_1062[6 /*17*/] = 1;
			Local_1062[1 /*17*/] = 1;
			Local_1062[2 /*17*/] = 1;
			Local_1062[3 /*17*/] = 1;
			break;
		
		case 3:
			func_213(&(Local_1062[6 /*17*/].f_9), 255, 255, 255, 30);
			func_213(&(Local_1062[1 /*17*/].f_9), 255, 255, 255, 20);
			func_213(&(Local_1062[2 /*17*/].f_13), 0, 0, 0, 30);
			func_213(&(Local_1062[4 /*17*/].f_9), 255, 255, 255, 255);
			Local_1062[0 /*17*/] = 1;
			Local_1062[6 /*17*/] = 1;
			Local_1062[1 /*17*/] = 1;
			Local_1062[2 /*17*/] = 1;
			Local_1062[4 /*17*/] = 1;
			break;
		
		case 4:
			func_213(&(Local_1062[6 /*17*/].f_9), 255, 255, 255, 30);
			func_213(&(Local_1062[1 /*17*/].f_9), 255, 255, 255, 20);
			func_213(&(Local_1062[2 /*17*/].f_13), 0, 0, 0, 30);
			func_213(&(Local_1062[5 /*17*/].f_9), 255, 255, 255, 184);
			Local_1062[0 /*17*/] = 1;
			Local_1062[6 /*17*/] = 1;
			Local_1062[1 /*17*/] = 1;
			Local_1062[2 /*17*/] = 1;
			Local_1062[5 /*17*/] = 1;
			break;
		
		case 1:
			func_213(&(Local_1062[6 /*17*/].f_9), 255, 255, 255, 30);
			func_213(&(Local_1062[1 /*17*/].f_9), 255, 255, 255, 20);
			func_213(&(Local_1062[2 /*17*/].f_13), 0, 0, 0, 10);
			Local_1062[0 /*17*/] = 1;
			Local_1062[6 /*17*/] = 1;
			Local_1062[1 /*17*/] = 1;
			Local_1062[2 /*17*/] = 1;
			Local_1062[3 /*17*/] = 1;
			break;
		
		case 0:
			func_213(&(Local_1062[6 /*17*/].f_9), 255, 255, 255, 30);
			func_213(&(Local_1062[1 /*17*/].f_9), 255, 255, 255, 20);
			func_213(&(Local_1062[2 /*17*/].f_13), 0, 0, 0, 10);
			func_213(&(Local_1062[5 /*17*/].f_9), 255, 255, 255, 255);
			Local_1062[0 /*17*/] = 1;
			Local_1062[6 /*17*/] = 1;
			Local_1062[1 /*17*/] = 1;
			Local_1062[2 /*17*/] = 1;
			Local_1062[5 /*17*/] = 1;
			break;
		
		case 6:
			func_213(&(Local_1062[1 /*17*/].f_9), 255, 255, 255, 10);
			func_213(&(Local_1062[2 /*17*/].f_13), 0, 0, 0, 8);
			func_213(&(Local_1062[7 /*17*/].f_9), 255, 255, 255, 100);
			Local_1062[0 /*17*/] = 1;
			Local_1062[1 /*17*/] = 1;
			Local_1062[2 /*17*/] = 1;
			Local_1062[7 /*17*/] = 1;
			break;
		
		case 7:
			func_213(&(Local_1062[2 /*17*/].f_13), 0, 0, 0, 8);
			Local_1062[2 /*17*/] = 1;
			Local_1062[0 /*17*/] = 1;
			func_213(&(Local_1062[3 /*17*/].f_9), 255, 255, 255, 180);
			Local_1062[3 /*17*/] = 1;
			func_213(&(Local_1062[6 /*17*/].f_9), 255, 255, 255, 30);
			Local_1062[6 /*17*/] = 1;
			break;
		
		case 5:
			func_213(&(Local_1062[6 /*17*/].f_9), 255, 255, 255, 30);
			func_213(&(Local_1062[1 /*17*/].f_9), 255, 255, 255, 20);
			func_213(&(Local_1062[2 /*17*/].f_13), 0, 0, 0, 10);
			Local_1062[0 /*17*/] = 1;
			Local_1062[6 /*17*/] = 1;
			Local_1062[1 /*17*/] = 1;
			Local_1062[2 /*17*/] = 1;
			Local_1062[3 /*17*/] = 1;
			break;
		
		case 8:
			Local_1062[1 /*17*/] = 0;
			Local_1062[2 /*17*/] = 0;
			Local_1062[0 /*17*/] = 1;
			func_213(&(Local_1062[0 /*17*/].f_9), 0, 0, 255, 90);
			Local_1062[6 /*17*/] = 1;
			func_213(&(Local_1062[6 /*17*/].f_9), 255, 0, 0, 15);
			Local_1062[7 /*17*/] = 1;
			func_213(&(Local_1062[7 /*17*/].f_9), 255, 255, 255, 115);
			break;
		
		case 9:
			Local_1062[1 /*17*/] = 0;
			Local_1062[2 /*17*/] = 0;
			Local_1062[0 /*17*/] = 1;
			func_213(&(Local_1062[0 /*17*/].f_9), 0, 0, 255, 90);
			Local_1062[6 /*17*/] = 1;
			func_213(&(Local_1062[6 /*17*/].f_9), 255, 0, 0, 15);
			Local_1062[7 /*17*/] = 1;
			func_213(&(Local_1062[7 /*17*/].f_9), 255, 255, 255, 115);
			break;
		
		case 10:
			Local_1062[1 /*17*/] = 0;
			Local_1062[2 /*17*/] = 0;
			Local_1062[0 /*17*/] = 1;
			func_213(&(Local_1062[0 /*17*/].f_9), 0, 0, 255, 90);
			Local_1062[6 /*17*/] = 1;
			func_213(&(Local_1062[6 /*17*/].f_9), 255, 0, 0, 15);
			Local_1062[7 /*17*/] = 1;
			func_213(&(Local_1062[7 /*17*/].f_9), 255, 255, 255, 115);
			break;
		
		case 11:
			func_213(&(Local_1062[6 /*17*/].f_9), 255, 255, 255, 15);
			func_213(&(Local_1062[1 /*17*/].f_9), 255, 255, 255, 10);
			func_213(&(Local_1062[2 /*17*/].f_13), 0, 0, 0, 5);
			Local_1062[0 /*17*/] = 1;
			Local_1062[6 /*17*/] = 1;
			Local_1062[1 /*17*/] = 1;
			Local_1062[3 /*17*/] = 1;
			break;
		
		case 12:
			func_213(&(Local_1062[1 /*17*/].f_9), 255, 255, 255, 3);
			func_213(&(Local_1062[2 /*17*/].f_13), 0, 0, 0, 15);
			func_213(&(Local_1062[0 /*17*/].f_9), 0, 0, 255, 90);
			func_213(&(Local_1062[6 /*17*/].f_9), 255, 255, 255, 15);
			Local_1062[1 /*17*/] = 1;
			Local_1062[2 /*17*/] = 0;
			Local_1062[0 /*17*/] = 1;
			Local_1062[6 /*17*/] = 1;
			break;
	}
}

void func_345()
{
	MISC::SET_BIT(&(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_887), 16);
	Global_4718592.f_132672 = 1;
	Global_1637074 = 1;
	func_347();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_22(PLAYER::PLAYER_ID(), 0, 0, 0);
		func_346();
	}
	else
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
	}
	func_38(1, 0, 1, 0);
	func_21(0, 1, -1);
	func_21(1, 1, -1);
	func_21(2, 1, -1);
	func_21(3, 1, -1);
	func_21(4, 1, -1);
	func_21(6, 1, -1);
	func_21(7, 1, -1);
	func_21(8, 1, -1);
	func_21(9, 1, -1);
	func_21(10, 1, -1);
	func_21(11, 1, -1);
	func_21(12, 1, -1);
	func_21(13, 1, -1);
	func_21(14, 1, -1);
	func_21(15, 1, -1);
	func_21(16, 1, -1);
}

void func_346()
{
	if (!Global_2703660.f_833.f_10)
	{
		Global_2703660.f_833.f_10 = 1;
	}
}

void func_347()
{
	if (func_353() || func_352())
	{
		func_351();
		func_348();
	}
}

void func_348()
{
	if ((!func_350() && !func_349()) && Global_2715550)
	{
		Global_4718592.f_87009 = 0;
	}
}

bool func_349()
{
	return Global_2714635.f_691;
}

bool func_350()
{
	return Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_192 != 0;
}

void func_351()
{
	Global_2714635.f_756 = 1;
}

var func_352()
{
	return Global_2714635.f_735;
}

var func_353()
{
	return BitTest(Global_2714635.f_2, 11);
}

void func_354(var uParam0, int iParam1)
{
	struct<8> Var0;
	bool bVar8;
	bool bVar9;
	int iVar10;
	
	Var0.f_5 = 1073741824;
	Var0.f_6 = -1073741824;
	Var0.f_0 = 988620539;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam1;
	Var0.f_3 = uParam0->f_3;
	Var0.f_4 = uParam0->f_4;
	Var0.f_5 = uParam0->f_6;
	Var0.f_6 = uParam0->f_7;
	Var0.f_7 = uParam0->f_8;
	bVar8 = false;
	if (iParam1 == 11)
	{
		if (BitTest(Global_2689224[PLAYER::PLAYER_ID() /*451*/].f_427, 1))
		{
			MISC::CLEAR_BIT(&(Global_2689224[PLAYER::PLAYER_ID() /*451*/].f_427), true);
			bVar8 = true;
		}
	}
	uParam0->f_5 = 0;
	if (!func_97(&(uParam0->f_1)))
	{
		func_94(&(uParam0->f_1), 0, 0);
	}
	bVar9 = true;
	if (*uParam0 == iParam1 && !bVar8)
	{
		if (func_97(&(uParam0->f_1)) && !func_93(&(uParam0->f_1), 1000, 0))
		{
			bVar9 = false;
		}
		else
		{
			func_96(&(uParam0->f_1));
		}
	}
	else
	{
		*uParam0 = iParam1;
		func_96(&(uParam0->f_1));
	}
	if (bVar9)
	{
		iVar10 = func_55(PLAYER::PLAYER_ID());
		if (iVar10 != -1)
		{
			SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 8, iVar10);
			uParam0->f_5 = 1;
		}
	}
}

int func_355(int iParam0)
{
	if (iParam0 != func_14())
	{
		if (func_61(iParam0, 1, 1))
		{
			if (Global_2689224[iParam0 /*451*/].f_317.f_6 != -1)
			{
				return func_45(Global_2689224[iParam0 /*451*/].f_317.f_6) == 17;
			}
		}
	}
	return 0;
}

void func_356()
{
	bool bVar0;
	int iVar1;
	
	if (Global_1932185.f_1 != 0)
	{
		func_163(0);
	}
	Local_152.f_411 = (Local_152.f_411 + SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f)));
	Local_152.f_412 = SYSTEM::FLOOR((IntToFloat(Local_152.f_411) / 66f));
	Local_152.f_411 = (Local_152.f_411 - SYSTEM::ROUND((66f * IntToFloat(Local_152.f_412))));
	Local_152.f_413 = (Local_152.f_413 + SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f)));
	Local_152.f_414 = SYSTEM::FLOOR((IntToFloat(Local_152.f_413) / (66f * 3f)));
	Local_152.f_413 = (Local_152.f_413 - SYSTEM::ROUND(((66f * 3f) * IntToFloat(Local_152.f_414))));
	Local_152.f_311 = (Local_152.f_311 + Local_152.f_412);
	Local_152.f_416 = (Local_152.f_416 + Local_152.f_414);
	if (Local_152.f_416 >= 3)
	{
		Local_152.f_416 = 0;
	}
	func_398();
	func_397();
	func_396();
	if (Local_152.f_140 >= 11)
	{
		return;
	}
	if (!func_35())
	{
		func_15(11);
		return;
	}
	if (func_383())
	{
		if (func_355(PLAYER::PLAYER_ID()))
		{
			Local_152.f_443.f_4 = 0;
			Local_152.f_443.f_3 = 0;
			func_354(&(Local_152.f_443), 11);
		}
		func_15(11);
		return;
	}
	if ((Local_152.f_178.f_1 && !Local_605.f_164) && (Local_152.f_435 == -2147483647 || (NETWORK::GET_NETWORK_TIME() - Local_152.f_435) > 5000))
	{
		func_382(func_56(PLAYER::PLAYER_ID()), 0);
		Local_152.f_435 = NETWORK::GET_NETWORK_TIME();
	}
	func_373();
	MISC::CLEAR_BIT(&(Local_152.f_417), false);
	bVar0 = Local_152.f_140 >= 2;
	func_357(bVar0);
	Local_152.f_452 = 1;
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (Local_152.f_178 != iVar1 && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			Local_152.f_452 = 0;
		}
		bVar1++;
	}
	bVar1 = false;
	while (bVar1 <= 3)
	{
		if (!Local_152.f_452)
		{
			Local_913[bVar1 /*37*/].f_25 = 0;
			func_12(0);
		}
		if (Local_913[bVar1 /*37*/].f_25)
		{
			func_12(1);
		}
		bVar1++;
	}
}

void func_357(bool bParam0)
{
	func_370();
	PAD::_0x7F4724035FDCA1DD(0);
	PAD::_0x7F4724035FDCA1DD(2);
	if (MISC::IS_PC_VERSION())
	{
		PAD::DISABLE_CONTROL_ACTION(2, 200, true);
	}
	PAD::DISABLE_CONTROL_ACTION(2, 199, true);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(false);
	func_369(1);
	func_368(4, -1);
	HUD::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
	func_367();
	func_366();
	HUD::THEFEED_HIDE_THIS_FRAME();
	if (bParam0)
	{
		func_359(0);
		if (!HUD::IS_PAUSE_MENU_ACTIVE())
		{
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
		}
	}
	func_358();
	RECORDING::_STOP_RECORDING_THIS_FRAME();
}

void func_358()
{
	Global_22691.f_134 = 1;
}

void func_359(int iParam0)
{
	if (func_365())
	{
		return;
	}
	if (!Global_19954.f_1 == 1)
	{
		if (func_364(0))
		{
			func_360(iParam0);
		}
		MISC::SET_BIT(&Global_7825, 2);
	}
}

void func_360(int iParam0)
{
	if (func_365())
	{
		return;
	}
	if (Global_20144)
	{
		if (func_363())
		{
			func_362(1, 1);
		}
		else
		{
			func_362(0, 0);
		}
	}
	if (Global_19954.f_1 == 10 || Global_19954.f_1 == 9)
	{
		MISC::SET_BIT(&Global_7825, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_21285 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_7824, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_7824, 30);
	}
	if (!func_361())
	{
		Global_19954.f_1 = 3;
	}
}

int func_361()
{
	if (Global_19954.f_1 == 1 || Global_19954.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_362(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_364(0))
		{
			Global_20144 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_19891);
			}
			Global_19882 = { Global_19900[Global_19899 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19882);
		}
	}
	else if (Global_20144 == 1)
	{
		Global_20144 = 0;
		Global_19882 = { Global_19907[Global_19899 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19891);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19882);
		}
	}
}

bool func_363()
{
	return BitTest(Global_1958928, 5);
}

int func_364(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19954.f_1 > 3)
		{
			if (BitTest(Global_7824, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_19954.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_365()
{
	return BitTest(Global_1958928, 19);
}

void func_366()
{
	Global_22691.f_6 = 1;
}

void func_367()
{
	Global_1574745 = 1;
	StringCopy(&(Global_1574745.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1574745.f_9 = MISC::GET_HASH_KEY(&(Global_1574745.f_1));
}

void func_368(bool bParam0, int iParam1)
{
	MISC::SET_BIT(&(Global_1644218.f_1047), iParam0);
	switch (bParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1644218.f_170[iParam1] = 1;
			}
			break;
	}
}

void func_369(int iParam0)
{
	Global_1645748.f_1121 = iParam0;
}

void func_370()
{
	fLocal_126 = func_372();
	fLocal_127 = func_371();
}

float func_371()
{
	return (1.778f / fLocal_126);
}

float func_372()
{
	GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&uLocal_128, &iLocal_129);
	fLocal_126 = GRAPHICS::_GET_ASPECT_RATIO(false);
	if (MISC::IS_PC_VERSION())
	{
		if (fLocal_126 >= 4f)
		{
			fLocal_126 = (fLocal_126 / 3f);
		}
	}
	return fLocal_126;
}

void func_373()
{
	int iVar0;
	struct<3> Var1;
	struct<5> Var4;
	struct<4> Var9;
	struct<5> Var13;
	struct<15> Var18;
	struct<2> Var43;
	
	Var18.f_3 = 10;
	Var18.f_14 = 10;
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		if (SCRIPT::GET_EVENT_AT_INDEX(1, iVar0) != 174)
		{
		}
		else if (SCRIPT::GET_EVENT_DATA(1, iVar0, &Var1, 3))
		{
			if (Var1.f_0 == 1889605535)
			{
				func_381(Var1.f_2);
			}
			else if (SCRIPT::GET_EVENT_DATA(1, iVar0, &Var4, 5))
			{
				if (Var4.f_0 == 1551971435)
				{
					func_379(Var4.f_2, Var4.f_3, Var4.f_4);
				}
				else if (SCRIPT::GET_EVENT_DATA(1, iVar0, &Var9, 4))
				{
					if (Var9.f_0 == -1100083080)
					{
						func_378(Var9.f_3, Var9.f_2);
					}
					else if (SCRIPT::GET_EVENT_DATA(1, iVar0, &Var13, 5))
					{
						if (Var9.f_0 == -77904037)
						{
							func_377(Var13.f_2, Var13.f_3, Var13.f_4);
						}
						else if (SCRIPT::GET_EVENT_DATA(1, iVar0, &Var18, 25))
						{
							if (Var18.f_0 == 549044096)
							{
								if (Local_605.f_164)
								{
								}
								else if (Var18.f_2 != 0)
								{
								}
								else
								{
									func_375(&(Var18.f_3), &(Var18.f_14));
									Jump @301; //curOff = 264
									if (SCRIPT::GET_EVENT_DATA(1, iVar0, &Var43, 2))
									{
										if (Var43.f_0 == -713331550)
										{
											func_374(Var43.f_1);
										}
									}
								}
								iVar0++;
							}

void func_374(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iParam0);
	iVar1 = func_130(iVar0);
	if (iVar1 < 0 || iVar1 >= 10)
	{
		return;
	}
	Local_605.f_165[iVar1 /*3*/] = Local_811[iVar0 /*9*/].f_7;
	func_54(func_56(PLAYER::PLAYER_ID()), 0, iVar1, Local_605.f_165[iVar1 /*3*/], Local_605.f_165[iVar1 /*3*/].f_1, 0);
}

void func_375(var uParam0, var uParam1)
{
	int iVar0;
	
	if (!Local_152.f_178.f_1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if ((*uParam1)[iVar0] <= 0)
		{
			Local_605.f_165[iVar0 /*3*/].f_1 = (50 - iVar0 * 2);
			Local_605.f_165[iVar0 /*3*/] = func_376(iVar0);
			func_54(func_56(PLAYER::PLAYER_ID()), 0, iVar0, Local_605.f_165[iVar0 /*3*/], Local_605.f_165[iVar0 /*3*/].f_1, 0);
		}
		else
		{
			Local_605.f_165[iVar0 /*3*/].f_1 = (*uParam1)[iVar0];
			Local_605.f_165[iVar0 /*3*/] = (*uParam0)[iVar0];
		}
		iVar0++;
	}
	Local_605.f_164 = 1;
}

int func_376(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 69644;
		
		case 1:
			return 356361;
		
		case 2:
			return 533761;
		
		case 3:
			return 861443;
		
		case 4:
			return 21638;
		
		case 5:
			return 336649;
		
		case 6:
			return 586639;
		
		case 7:
			return 795403;
		
		case 8:
			return 38023;
		
		case 9:
			return 341123;
		
		default:
	}
	return 0;
}

void func_377(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (bParam2)
		{
			func_164("Hit_By_Car", iParam0, &(Local_152.f_204[iParam0 /*19*/].f_6));
		}
		else
		{
			func_164("Death", iParam0, &(Local_152.f_204[iParam0 /*19*/].f_6));
		}
	}
	else
	{
		func_164("Pain", iParam0, &(Local_152.f_204[iParam0 /*19*/].f_6));
	}
}

void func_378(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3[2];
	var uVar6[2];
	int iVar9;
	bool bVar10;
	bool bVar11;
	int iVar12;
	
	if (!Local_152.f_178.f_1)
	{
		return;
	}
	iVar9 = 1;
	func_184(iParam1, &iVar1, &iVar2);
	if (func_73())
	{
		if ((iVar1 % 2) == 0)
		{
			iVar9 = 2;
		}
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			bVar10 = func_73();
			iVar3[iVar0] = func_72(bVar10, 0, 1);
			uVar6[iVar0] = func_71((iVar1 + iVar9), func_72(bVar10, 8, 0));
			iVar9 = (iVar9 * -1);
			iVar0++;
		}
	}
	else
	{
		if ((iVar2 % 2) == 0)
		{
			iVar9 = 2;
		}
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			bVar11 = func_73();
			iVar3[iVar0] = func_72(bVar11, 2, 3);
			uVar6[iVar0] = func_71(func_72(bVar11, 12, 0), (iVar2 + iVar9));
			iVar9 = (iVar9 * -1);
			iVar0++;
		}
	}
	iVar12 = 1;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		Local_605.f_148[(iVar0 + iVar12) /*4*/].f_1 = uVar6[iVar0];
		Local_605.f_148[(iVar0 + iVar12) /*4*/] = NETWORK::GET_NETWORK_TIME() + 1000;
		Local_605.f_148[(iVar0 + iVar12) /*4*/].f_2 = iVar3[iVar0];
		Local_605.f_148[(iVar0 + iVar12) /*4*/].f_3 = (5 + iParam0);
		iVar0++;
	}
	Local_605.f_161 = NETWORK::GET_NETWORK_TIME();
}

void func_379(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!Local_152.f_178.f_1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (iVar0 == iParam2)
		{
			if (!func_81(&(Local_605.f_85[iVar0 /*11*/][iParam1 /*5*/]), iParam0))
			{
				func_89(&(Local_605.f_85[iVar0 /*11*/][iParam1 /*5*/]), iParam0);
			}
		}
		else if (func_81(&(Local_605.f_85[iVar0 /*11*/][iParam1 /*5*/]), iParam0))
		{
			func_380(&(Local_605.f_85[iVar0 /*11*/][iParam1 /*5*/]), iParam0);
		}
		iVar0++;
	}
}

void func_380(var uParam0, int iParam1)
{
	MISC::CLEAR_BIT(uParam0[func_83(iParam1)], func_82(iParam1));
}

void func_381(int iParam0)
{
	if (!Local_152.f_178.f_1)
	{
		return;
	}
	Local_605.f_62[iParam0 /*3*/].f_1 = -1;
	Local_605.f_62[iParam0 /*3*/] = -1;
	Local_605.f_62[iParam0 /*3*/].f_2 = -2147483647;
}

void func_382(int iParam0, int iParam1)
{
	struct<3> Var0;
	int iVar3;
	
	Var0.f_0 = 1000228518;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam1;
	iVar3 = func_55(iParam0);
	if (!iVar3 == 0 && func_61(iParam0, 0, 1))
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 3, iVar3);
	}
}

int func_383()
{
	int iVar0;
	
	if (Global_1932187)
	{
		return 1;
	}
	if (func_395())
	{
		return 1;
	}
	if (func_394(PLAYER::GET_PLAYER_INDEX()))
	{
		return 1;
	}
	if (!func_393())
	{
		return 1;
	}
	if (func_387())
	{
		return 1;
	}
	if (Local_605.f_145 == 4 && Local_811[Local_152.f_178 /*9*/] != 4)
	{
		return 0;
	}
	if (Local_152.f_140 < 2)
	{
		return 0;
	}
	iVar0 = 202;
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		iVar0 = 214;
	}
	if (PAD::IS_CONTROL_PRESSED(2, iVar0) || PAD::IS_DISABLED_CONTROL_PRESSED(2, iVar0))
	{
		func_384((1000 - MISC::ABSI((NETWORK::GET_NETWORK_TIME() - Local_152.f_431))), 1000, "DEG_GAME_QUIT", 1, -1, 2, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
	}
	else
	{
		func_384(0, 1000, "DEG_GAME_QUIT", 1, -1, 2, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
	}
	if (PAD::IS_DISABLED_CONTROL_PRESSED(2, iVar0))
	{
		if (Local_152.f_431 == -2147483647)
		{
			Local_152.f_431 = NETWORK::GET_NETWORK_TIME() + 1000;
		}
		if (NETWORK::GET_NETWORK_TIME() > Local_152.f_431)
		{
			return 1;
		}
	}
	else if (Local_152.f_431 != -2147483647)
	{
		Local_152.f_431 = -2147483647;
	}
	if (func_355(PLAYER::PLAYER_ID()))
	{
		if (func_387())
		{
			return 1;
		}
	}
	return 0;
}

void func_384(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34, int iParam35, int iParam36)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_386(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1645748.f_1 = 1;
		func_385(0, iVar0);
		Global_1645748.f_1135[iVar0] = iParam0;
		Global_1645748.f_1135.f_11[iVar0] = iParam1;
		StringCopy(&(Global_1645748.f_1135.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1645748.f_1135.f_194[iVar0] = iParam3;
		Global_1645748.f_1135.f_183[iVar0] = iParam4;
		Global_1645748.f_1135.f_216[iVar0] = iParam5;
		Global_1645748.f_1135.f_227[iVar0 /*3*/] = iParam6;
		Global_1645748.f_1135.f_227[iVar0 /*3*/].f_1 = iParam7;
		Global_1645748.f_1135.f_258[iVar0] = iParam8;
		Global_1645748.f_1135.f_269[iVar0] = iParam9;
		Global_1645748.f_1135.f_312[iVar0] = iParam10;
		Global_1645748.f_1135.f_323[iVar0] = iParam11;
		Global_1645748.f_1135.f_334[iVar0] = iParam12;
		Global_1645748.f_1135.f_345[iVar0] = iParam13;
		Global_1645748.f_1130 = 1;
		Global_1645748.f_1135.f_356[iVar0] = iParam14;
		Global_1645748.f_1135.f_367[iVar0] = iParam15;
		Global_1645748.f_1135.f_378[iVar0] = iParam16;
		Global_1645748.f_1135.f_389[iVar0] = iParam17;
		Global_1645748.f_1135.f_400[iVar0] = iParam18;
		Global_1645748.f_1135.f_411[iVar0] = iParam19;
		Global_1645748.f_1135.f_422[iVar0] = iParam20;
		Global_1645748.f_1135.f_433[iVar0] = iParam21;
		Global_1645748.f_1135.f_444[iVar0] = iParam22;
		Global_1645748.f_1135.f_455[iVar0] = iParam23;
		Global_1645748.f_1135.f_466[iVar0] = iParam24;
		Global_1645748.f_1135.f_205[iVar0] = iParam25;
		Global_1645748.f_1135.f_477[iVar0] = iParam26;
		Global_1645748.f_1135.f_488[iVar0] = iParam27;
		Global_1645748.f_1135.f_499[iVar0] = iParam28;
		Global_1645748.f_1135.f_510[iVar0] = iParam29;
		Global_1645748.f_1135.f_521[iVar0] = iParam30;
		Global_1645748.f_1135.f_532[iVar0] = iParam31;
		Global_1645748.f_1135.f_543[iVar0] = iParam32;
		Global_1645748.f_1135.f_554[iVar0] = iParam33;
		Global_1645748.f_1135.f_565[iVar0] = iParam34;
		Global_1645748.f_1135.f_576[iVar0] = iParam35;
		Global_1645748.f_1135.f_587[iVar0] = iParam36;
	}
}

void func_385(int iParam0, bool bParam1)
{
	MISC::SET_BIT(&(Global_1645748.f_6736[iParam0]), iParam1);
}

int func_386(int iParam0, int iParam1)
{
	return BitTest(Global_1645748.f_6736[iParam0], iParam1);
}

int func_387()
{
	if (func_355(PLAYER::PLAYER_ID()))
	{
		if (func_392(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
		if (func_391(PLAYER::PLAYER_ID(), 0) && func_389(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	if (func_388())
	{
		return 1;
	}
	if (Global_1578993.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_388()
{
	return BitTest(Global_1973284, 14);
}

var func_389(int iParam0)
{
	return func_390(iParam0, 20);
}

var func_390(int iParam0, int iParam1)
{
	return BitTest(Global_1893551[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_391(int iParam0, int iParam1)
{
	if (Global_1893551[iParam0 /*599*/].f_10.f_33 != -1 || (iParam1 && Global_1893551[iParam0 /*599*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_392(int iParam0)
{
	if (func_31(iParam0, 0))
	{
		return 1;
	}
	if (func_30())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (BitTest(Global_2689224[iParam0 /*451*/].f_197, 2))
	{
		return 1;
	}
	return 0;
}

int func_393()
{
	switch (func_44())
	{
		case 15:
		case 17:
			return 1;
			break;
	}
	return 0;
}

int func_394(int iParam0)
{
	if (iParam0 != func_14())
	{
		return BitTest(Global_1893551[iParam0 /*599*/].f_513, 3);
	}
	return 0;
}

bool func_395()
{
	return Global_1946941.f_4703.f_1 != -1;
}

void func_396()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	Local_152.f_147 = 0;
	Local_152.f_148 = 0;
	Local_152.f_434 = Local_152.f_433;
	iVar0 = -1;
	iVar1 = -1;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 <= 3)
	{
		Local_152.f_149[iVar2] = -1;
		if (iLocal_806[iVar2] > iVar0)
		{
			iVar0 = iLocal_806[iVar2];
			iVar1 = iVar2;
		}
		else if (iLocal_806[iVar2] == iVar0)
		{
			iVar1 = -1;
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 <= 3)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2)) && !Local_913[bVar2 /*37*/].f_25)
		{
		}
		else if (Local_811[bVar2 /*9*/].f_6 == -1)
		{
		}
		else
		{
			Local_152.f_149[Local_811[bVar2 /*9*/].f_6] = bVar2;
			if (Local_811[bVar2 /*9*/].f_6 == iVar1)
			{
				iVar1 = bVar2;
			}
			if (Local_152.f_154[Local_811[bVar2 /*9*/].f_6] == -2147483647 && Global_1932185.f_1 == 0)
			{
				func_163((12 + Local_811[bVar2 /*9*/].f_6));
				Local_152.f_154[Local_811[bVar2 /*9*/].f_6] = NETWORK::GET_NETWORK_TIME();
			}
			Local_152.f_148++;
			if (Local_152.f_204[bVar2 /*19*/].f_9 != Local_811[bVar2 /*9*/].f_2)
			{
				iVar3 = (Local_811[bVar2 /*9*/].f_2 - Local_152.f_204[bVar2 /*19*/].f_9);
				if (iVar3 > 0)
				{
					Local_152.f_204[bVar2 /*19*/].f_9 = (Local_152.f_204[bVar2 /*19*/].f_9 + Local_152.f_412);
					if (Local_152.f_204[bVar2 /*19*/].f_9 > Local_811[bVar2 /*9*/].f_2)
					{
						Local_152.f_204[bVar2 /*19*/].f_9 = Local_811[bVar2 /*9*/].f_2;
					}
				}
				else
				{
					Local_152.f_204[bVar2 /*19*/].f_9 = (Local_152.f_204[bVar2 /*19*/].f_9 - Local_152.f_414);
					if (Local_152.f_204[bVar2 /*19*/].f_9 < Local_811[bVar2 /*9*/].f_2)
					{
						Local_152.f_204[bVar2 /*19*/].f_9 = Local_811[bVar2 /*9*/].f_2;
					}
				}
			}
			if (Local_811[bVar2 /*9*/] == 4)
			{
			}
			else
			{
				Local_152.f_147++;
			}
		}
		bVar2++;
	}
	Local_152.f_433 = iVar1;
	bVar2 = false;
	while (bVar2 <= 3)
	{
		if (Local_152.f_149[bVar2] == -1 && Local_152.f_154[bVar2] != -2147483647)
		{
			Local_152.f_154[bVar2] = -2147483647;
		}
		bVar2++;
	}
}

void func_397()
{
	bool bVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		Local_152.f_178 = NETWORK::PARTICIPANT_ID_TO_INT();
		bVar0 = NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT();
		Local_152.f_178.f_1 = bVar0;
	}
}

void func_398()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Local_913[iVar0 /*37*/].f_25)
		{
			Local_811[iVar0 /*9*/] = { Local_913[iVar0 /*37*/] };
		}
		iVar0++;
	}
}

void func_399()
{
	SYSTEM::WAIT(0);
}

void func_400(struct<21> Param0)
{
	func_406(4, Param0);
	func_404(0, -1, 0);
	func_403();
	func_402();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_605, 201, 0);
	NETWORK::_0xEA8C0DDB10E2822A(&iLocal_806, 5, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_811, 37, 0);
	NETWORK::_0xD6D7478CA62B8D41(&Local_848, 65, 0);
	if (!func_401())
	{
		func_9();
	}
	Local_811[NETWORK::PARTICIPANT_ID_TO_INT() /*9*/].f_6 = Param0.f_19;
}

int func_401()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 0;
		}
		if (NETWORK::NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA())
		{
			return 1;
		}
		if (func_8())
		{
			return 0;
		}
		if (func_6(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		SYSTEM::WAIT(0);
	}
	return 0;
}

void func_402()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Local_605[iVar0 /*5*/][iVar1] = -1;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		Local_605.f_62[iVar0 /*3*/] = -1;
		Local_605.f_62[iVar0 /*3*/].f_1 = -1;
		Local_605.f_62[iVar0 /*3*/].f_2 = -2147483647;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Local_605.f_148[iVar0 /*4*/] = -2147483647;
		Local_605.f_148[iVar0 /*4*/].f_1 = -1;
		Local_605.f_148[iVar0 /*4*/].f_2 = -1;
		Local_605.f_148[iVar0 /*4*/].f_3 = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		Local_605.f_131[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Local_605.f_196[iVar0] = 99;
		iVar0++;
	}
}

void func_403()
{
}

int func_404(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_10();
			}
			else
			{
				return 0;
			}
		}
		if (!func_405())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_10();
					}
					else
					{
						return 0;
					}
				}
				if (func_8())
				{
					if (!bParam2)
					{
						func_10();
					}
					else
					{
						return 0;
					}
				}
				if (func_6(157))
				{
					if (!bParam2)
					{
						func_10();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
				{
					func_10();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (iParam1 > -1)
	{
		Global_1574665 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_10();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!bParam2)
		{
			func_10();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_405()
{
	return Global_1575030;
}

void func_406(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_10();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

