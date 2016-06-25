vaderbad = Creature:new {
	customName = "Darth Vader",
	socialGroup = "",
	faction = "",
	level = 600,
	chanceHit = 30,
	damageMin = 10645,
	damageMax = 30000,
	baseXp = 28549,
	baseHAM = 3805000,
	baseHAMmax = 4701000,
	armor = 3,
	resists = {90,90,90,90,90,90,90,90,90},
	meatType = "",
	meatAmount = 0,
	hideType = "",
	hideAmount = 0,
	boneType = "",
	boneAmount = 0,
	milk = 0,
	tamingChance = 0,
	ferocity = 1,
	pvpBitmask = AGGRESSIVE + ATTACKABLE + ENEMY,
	creatureBitmask = PACK + HERD + KILLER,
	optionsBitmask = 128,
	diet = HERBIVORE,
  	scale = 1.5,

	templates = {"object/mobile/darth_vader.iff"},
	lootGroups = {
		{
			groups = {
				{group = "holocron_dark", chance = 400000},
				{group = "holocron_light", chance = 400000},
				{group = "crystals_premium", chance = 400000},
				{group = "color_crystals_special", chance = 1000000},
				{group = "rifles", chance = 300000},
				{group = "pistols", chance = 300000},
				{group = "melee_weapons", chance = 1300000},
				{group = "armor_attachments", chance = 1900000},
				{group = "clothing_attachments", chance = 1900000},
				{group = "carbines", chance = 1300000},
				{group = "wearables_rare", chance = 800000}
			},
			lootChance = 9000000
		},
		{
			groups = {
				{group = "crystals_premium", chance = 500000},
				{group = "crystals_premium", chance = 500000},
				{group = "crystals_premium", chance = 500000},
				{group = "color_crystals", chance = 2500000},
				{group = "melee_weapons", chance = 3000000},
				{group = "armor_attachments", chance = 1500000},
				{group = "clothing_attachments", chance = 1500000}
			},
			lootChance = 9000000
		},
		{
			groups = {
				{group = "crystals_premium", chance = 1500000},
				{group = "color_crystals_special", chance = 500000},
				{group = "crystals_premium", chance = 500000},
				{group = "color_crystals_special", chance = 2500000},
				{group = "armor_all", chance = 2000000},
				{group = "armor_attachments", chance = 1500000},
				{group = "clothing_attachments", chance = 1500000}
			},
			lootChance = 9000000
		}
	},
	weapons = {light_jedi_weapons},
	conversationTemplate = "",
	attacks =  merge(lightsabermaster,forcepowermaster)
	
}

CreatureTemplates:addCreatureTemplate(vaderbad, "vaderbad")
