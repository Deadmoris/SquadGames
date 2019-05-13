if (isServer) then {
	if ((uniform _this == "LOP_U_CHR_Villager_01")) then {
		_rnd1 = floor random 4;
		_this setObjectTextureGlobal [0, ["\po_factions_eu\civilians\villager_co.paa", 
		"\po_factions_eu\civilians\villager_v2_co.paa",
		"\po_factions_eu\civilians\villager_v3_co.paa",
		"\po_factions_eu\civilians\villager_v4_co.paa"] select _rnd1];
	};	
	if ((uniform _this == "LOP_U_CHR_Profiteer_01")) then {
		_rnd1 = floor random 4;
		_this setObjectTextureGlobal [0, ["\po_factions_eu\civilians\profiteer_co.paa", 
		"\po_factions_eu\civilians\profiteer_v2_co.paa",
		"\po_factions_eu\civilians\profiteer_v3_co.paa",
		"\po_factions_eu\civilians\profiteer_v4_co.paa"] select _rnd1];
	};		
	if ((uniform _this == "LOP_U_CHR_Rocker_01")) then {
		_rnd1 = floor random 4;
		_this setObjectTextureGlobal [0, ["\po_factions_eu\civilians\rocker_co.paa", 
		"\po_factions_eu\civilians\rocker_v2_co.paa",
		"\po_factions_eu\civilians\rocker_v3_co.paa",
		"\po_factions_eu\civilians\rocker_v4_co.paa"] select _rnd1];
	};		
	if ((uniform _this == "LOP_U_CHR_Woodlander_01")) then {
		_rnd1 = floor random 4;
		_this setObjectTextureGlobal [0, ["\po_factions_eu\civilians\woodlander_co.paa", 
		"\po_factions_eu\civilians\woodlander_v2_co.paa",
		"\po_factions_eu\civilians\woodlander_v3_co.paa",
		"\po_factions_eu\civilians\woodlander_v4_co.paa"] select _rnd1];
	};		
	if ((uniform _this == "LOP_U_CHR_Worker_01")) then {
		_rnd1 = floor random 4;
		_this setObjectTextureGlobal [0, ["\po_factions_eu\civilians\worker_co.paa", 
		"\po_factions_eu\civilians\worker_v2_co.paa",
		"\po_factions_eu\civilians\worker_v3_co.paa",
		"\po_factions_eu\civilians\worker_v4_co.paa"] select _rnd1];
	};		
	if ((uniform _this == "LOP_U_CHR_Doctor_01")) then {
		_rnd1 = floor random 3;
		_this setObjectTextureGlobal [0, ["\po_factions_eu\civilians\doctor_co.paa", 
		"\po_factions_eu\civilians\doctor_2_co.paa",
		"\po_factions_eu\civilians\doctor_3_co.paa"] select _rnd1];
	};	
	if ((uniform _this == "LOP_U_CHR_Functionary_01")) then {
		_rnd1 = floor random 2;
		_this setObjectTextureGlobal [0, ["\po_factions_eu\civilians\functionary_co.paa", 
		"\po_factions_eu\civilians\functionary_2_co.paa"] select _rnd1];
	};	
};