snake_king = Creature:new {
	customName = "The Serpent King",
	socialGroup = "snake",
	faction = "",
	level = 321,
	chanceHit = 10.39,
	damageMin = 1310,
	damageMax = 2330,
	baseXp = 32097,
	baseHAM = 358300,
	baseHAMmax = 410100,
	armor = 1,
	resists = {80,80,80,80,80,80,80,80,80},
	meatType = "meat_carnivore",
	meatAmount = 500,
	hideType = "hide_scaley",
	hideAmount = 500,
	boneType = "",
	boneAmount = 500,
	milk = 1,
	tamingChance = 0.25,
	ferocity = 1,
	pvpBitmask = AGGRESSIVE + ATTACKABLE + ENEMY,
	creatureBitmask = PACK,
	optionsBitmask = 128,
	diet = CARNIVORE,

	templates = {"object/mobile/giant_crystal_snake.iff"},
	controlDeviceTemplate = "object/intangible/pet/crystal_snake.iff",
	scale = 1.8,
	lootGroups = {
		{
			groups = {
				{group = "holocron_dark", chance = 400000},
				{group = "holocron_light", chance = 400000},
				{group = "crystals_premium", chance = 400000},
				{group = "color_crystals", chance = 1000000},
				{group = "rifles", chance = 1300000},
				{group = "pistols", chance = 1300000},
				{group = "melee_weapons", chance = 1300000},
				{group = "armor_attachments", chance = 900000},
				{group = "clothing_attachments", chance = 900000},
				{group = "carbines", chance = 1300000},
				{group = "wearables_rare", chance = 800000}
			},
			lootChance = 9000000
		},
		{
			groups = {
				{group = "crystals_premium", chance = 1500000},
				{group = "crystals_premium", chance = 500000},
				{group = "pearls_flawless", chance = 500000},
				{group = "color_crystals", chance = 2500000},
				{group = "melee_weapons", chance = 2000000},
				{group = "armor_attachments", chance = 1500000},
				{group = "clothing_attachments", chance = 1500000}
			},
			lootChance = 9000000
		},
		{
			groups = {
				{group = "crystals_premium", chance = 1500000},
				{group = "crystals_select", chance = 500000},
				{group = "crystals_premium", chance = 500000},
				{group = "color_crystals", chance = 2500000},
				{group = "armor_all", chance = 2000000},
				{group = "armor_attachments", chance = 1500000},
				{group = "clothing_attachments", chance = 1500000}
			},
			lootChance = 9000000
		}
	},
	weapons = {"creature_spit_large_toxicgreen"},
	conversationTemplate = "",
	attacks = {
		{"posturedownattack"},
		{"strongpoison"},
		{"creatureareacombo","stateAccuracyBonus=100"},
		{"creatureareaknockdown","stateAccuracyBonus=100"},
		{"creatureareacombo",""},
		{"dizzyattack","dizzyChance=50"},
		{"blindattack","blindChance=50"},
		{"intimidationattack","intimidationChance=50"},
		{"creatureareaknockdown","knockdownChance=50"},
		{"stunattack","stunChance=50"},
		{"strongdisease"},
	}
}

CreatureTemplates:addCreatureTemplate(snake_king, "snake_king")
