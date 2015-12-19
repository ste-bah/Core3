LizardCaveScreenPlay = ScreenPlay:new {
	numberOfActs = 1,

	screenplayName = "LizardCaveScreenPlay",

}

registerScreenPlay("LizardCaveScreenPlay", true)

function LizardCaveScreenPlay:start()
	if (isZoneEnabled("dantooine")) then
		self:spawnMobiles()
	end
end

function LizardCaveScreenPlay:spawnMobiles()

	-- spawnMobile( zone, mobile, respawn, x, y, z, heading, cell )
	-- voritor_lizard CL22
	-- voritor_dasher CL30
	-- grassland_voritor_tracker CL45
	-- horned_voritor_lizard CL53
	-- slinking_voritor_hunter CL57
	
	-- Cell 8535539
	--spawnMobile("dantooine", "dark_adept", 600, 21.760, -42.017, -65.515, 8.926, 8535539)
	spawnMobile("dantooine", "bh_feral_force_wielder", 600, 24.077, -42.523, -66.183, 1.738, 8535539)
	spawnMobile("dantooine", "bh_force_sensitive_crypt_crawler", 600, 25.571, -42.597, -64.250, 56.130, 8535539)
	spawnMobile("dantooine", "bh_force_trained_archaist", 600, 27.312, -41.837, -60.359, 19.055, 8535539)
	spawnMobile("dantooine", "dark_adept", 600, 28.018, -43.482, -68.823, 19.908, 8535539)
	spawnMobile("dantooine", "bh_spiderclan_auspex", 600, 44.912, -47.290, -29.021, -177.829, 8535539)
	spawnMobile("dantooine", "bh_force_crystal_hunter", 600, 42.212, -46.239, -27.302, -120.821, 8535539)
	spawnMobile("dantooine", "bh_untrained_wielder_of_the_dark_side", 600, 46.014, -47.441, -26.657, -163.767, 8535539)
	spawnMobile("dantooine", "dark_adept", 600, 44.192, -46.779, -5.331, 178.254, 8535539)
	spawnMobile("dantooine", "bh_spiderclan_auspex", 600, 45.570, -47.166, -9.481, 160.761, 8535539)
	spawnMobile("dantooine", "bh_tusken_carnage_champion", 600, 43.264, -46.909, -12.460, 169.094, 8535539)
	
	-- Cell 8535539 (Alcove)
	spawnMobile("dantooine", "bh_nightsister_spell_weaver", 600, 52.554, -67.905, -45.620, 101.773, 8535539)
	spawnMobile("dantooine", "bh_nightsister_spell_weaver", 600, 52.955, -67.979, -43.690, 9.053, 8535539)
	spawnMobile("dantooine", "bh_nightsister_spell_weaver", 600, 56.401, -68.511, -38.735, 84.611, 8535539)
	spawnMobile("dantooine", "bh_nightsister_spell_weaver", 600, 58.296, -68.663, -41.529, 78.881, 8535539)
	
	-- Cell 8535540
	spawnMobile("dantooine", "spiderclan_protector", 600, 93.984, -62.319, -17.336, 70.119, 8535540)
	--spawnMobile("dantooine", "spiderclan_elder", 2400, 90.502, -61.936, -14.126, -100.567, 8535540)
	spawnMobile("dantooine", "spiderclan_web_dancer", 600, 91.977, -61.683, -12.733, -99.244, 8535540)
	spawnMobile("dantooine", "spiderclan_sentinel", 600, 84.013, -63.262, -20.888, -116.243, 8535540)
	spawnMobile("dantooine", "spiderclan_auspex", 600, 88.838, -62.839, -21.151, 64.944, 8535540)
	spawnMobile("dantooine", "spiderclan_crawler", 600, 82.839, -68.181, -39.295, 4.116, 8535540)
	spawnMobile("dantooine", "spiderclan_acolyte", 600, 84.836, -68.086, -39.546, 78.668, 8535540)
	
	-- Cell 8535541
	spawnMobile("dantooine", "force_crystal_hunter", 600, 94.256, -75.689, -69.152, 66.542, 8535541)
	spawnMobile("dantooine", "bh_force_trained_archaist", 600, 94.246, -75.689, -69.144, 56.139, 8535541)
	spawnMobile("dantooine", "dark_side_savage", 600, 90.626, -76.248, -70.429, 6.038, 8535541)
	spawnMobile("dantooine", "feral_force_wielder", 600, 92.067, -76.134, -72.352, 140.193, 8535541)
	spawnMobile("dantooine", "tusken_witch_doctor", 600, 60.868, -76.312, -79.295, 7.240, 8535541)
	spawnMobile("dantooine", "untrained_wielder_of_the_dark_side", 600, 62.514, -76.569, -77.483, 23.437, 8535541)
	spawnMobile("dantooine", "dark_side_savage", 600, 61.265, -76.407, -77.103, 2.890, 8535541)
	spawnMobile("dantooine", "bh_dark_adept", 600, 65.369, -76.885, -77.933, 102.814, 8535541)
	
	-- Cell 8535543
	spawnMobile("dantooine", "crazed_geonosian_guard", 600, 61.998, -65.481, -139.743, 8.992, 8535543)
	spawnMobile("dantooine", "crazed_geonosian_guard", 600, 61.777, -65.857, -138.165, 7.969, 8535543)
	spawnMobile("dantooine", "crazed_geonosian_guard", 600, 63.010, -66.384, -136.500, 45.978, 8535543)
	spawnMobile("dantooine", "crazed_geonosian_guard", 1200, 64.321, -66.164, -138.770, 27.952, 8535543)
	
	-- Cell 8535544
	spawnMobile("dantooine", "death_watch_ghost", 600, 81.445, -65.913, -136.373, -93.446, 8535544)
	--spawnMobile("dantooine", "black_sun_assassin", 600, 79.811, -65.673, -137.568, 84.788, 8535544)
	spawnMobile("dantooine", "black_sun_thug", 600, 83.323, -66.215, -137.181, 75.769, 8535544)
	
	-- Cell 8535542
	spawnMobile("dantooine", "nightsister_spell_weaver", 600, 97.121, -65.725, -112.859, -164.946, 8535542)
	--spawnMobile("dantooine", "ancient_bull_rancor", 600, 96.263, -66.103, -109.685, -147.274, 8535542)
	--spawnMobile("dantooine", "nightsister_elder", 1800, 96.887, -65.733, -111.373, 99.775, 8535542)
	spawnMobile("dantooine", "minor_gorax", 1200, 93.460, -66.327, -111.030, -154.576, 8535542)
	spawnMobile("dantooine", "nightsister_protector", 600, 91.293, -67.378, -108.165, -156.957, 8535542)
	
	-- Cell 8535545
	spawnMobile("dantooine", "bh_force_crystal_hunter", 600, 131.259, -66.362, -113.777, 45.641, 8535545)
	spawnMobile("dantooine", "voritor_lizard", 600, 128.998, -66.563, -110.709, 45.811, 8535545)
	--spawnMobile("dantooine", "lord_nyax", 1800, 128.442, -66.645, -108.273, -121.395, 8535545)
	spawnMobile("dantooine", "bull_rancor", 600, 132.753, -66.845, -123.535, 158.367, 8535545)
	--spawnMobile("dantooine", "acklay", 3600, 126.040, -66.264, -124.947, 68.913, 8535545)
	spawnMobile("dantooine", "bh_dark_adept", 600, 124.047, -66.279, -127.434, 73.805, 8535545)
	spawnMobile("dantooine", "voritor_lizard", 600, 129.005, -66.613, -129.858, 123.800, 8535545)
	spawnMobile("dantooine", "horned_voritor_lizard", 600, 146.676, -66.095, -129.911, 69.327, 8535545)
	spawnMobile("dantooine", "bh_dark_adept", 600, 146.383, -67.245, -123.293, 63.859, 8535545)
	spawnMobile("dantooine", "horned_voritor_lizard", 600, 152.210, -66.317, -125.843, -104.211, 8535545)
	spawnMobile("dantooine", "bh_force_trained_archaist", 600, 151.361, -66.730, -119.473, 3.631, 8535545)
	spawnMobile("dantooine", "voritor_dasher", 600, 150.572, -66.763, -118.364, 44.413, 8535545)
	--spawnMobile("dantooine", "bull_rancor", 600, 141.453, -66.825, -89.447, 81.216, 8535545)
	spawnMobile("dantooine", "singing_mountain_clan_councilwoman", 1800, 136.516, -67.087, -90.002, -108.724, 8535545)
	spawnMobile("dantooine", "slinking_voritor_hunter", 600, 130.807, -66.278, -98.276, -144.906, 8535545)
	spawnMobile("dantooine", "corsec_special_ops_major", 600, 135.646, -66.596, -99.549, 79.716, 8535545)
	
	-- Cell 8535546 (Final Alcove)
	--spawnMobile("dantooine", "nightsister_elder", 2400, 186.706, -65.422, -93.972, -105.512, 8535546)
	spawnMobile("dantooine", "gorax", 1800, 193.557, -66.871, -101.828, -105.995, 8535546)

	-- Cell 8535547
	spawnMobile("dantooine", "merek_deaths_head", 600, 47.770, -51.878, -87.259, 5.884, 8535547)
	spawnMobile("dantooine", "bh_feral_force_wielder", 600, 51.230, -51.600, -86.408, 22.915, 8535547)
	spawnMobile("dantooine", "bh_force_sensitive_crypt_crawler", 600, 49.550, -51.704, -83.037, 15.356, 8535547)
	spawnMobile("dantooine", "bh_tusken_carnage_champion", 1200, 51.149, -51.391, -89.491, 48.365, 8535547)
	
	-- Cell 8535542 (Upper)
	spawnMobile("dantooine", "nightsister_protector", 600, 94.666, -45.612, -97.346, -147.322, 8535542)
	spawnMobile("dantooine", "janta_clan_leader", 600, 96.586, -45.474, -103.480, -145.238, 8535542)
	--spawnMobile("dantooine", "dark_jedi_knight", 3600, 91.130, -46.439, -101.309, -113.872, 8535542)
	spawnMobile("dantooine", "janta_clan_leader", 600, 91.027, -46.898, -95.322, -147.514, 8535542)
	spawnMobile("dantooine", "bh_force_crystal_hunter", 600, 80.541, -46.486, -109.031, -147.011, 8535542)
		

end