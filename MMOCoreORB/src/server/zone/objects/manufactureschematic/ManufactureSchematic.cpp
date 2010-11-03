/*
 *	server/zone/objects/manufactureschematic/ManufactureSchematic.cpp generated by engine3 IDL compiler 0.60
 */

#include "ManufactureSchematic.h"

#include "server/zone/packets/scene/AttributeListMessage.h"

#include "server/zone/objects/draftschematic/DraftSchematic.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/tangible/TangibleObject.h"

#include "server/zone/objects/area/ActiveArea.h"

/*
 *	ManufactureSchematicStub
 */

ManufactureSchematic::ManufactureSchematic() : IntangibleObject(DummyConstructorParameter::instance()) {
	ManufactureSchematicImplementation* _implementation = new ManufactureSchematicImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
}

ManufactureSchematic::ManufactureSchematic(DummyConstructorParameter* param) : IntangibleObject(param) {
}

ManufactureSchematic::~ManufactureSchematic() {
}


void ManufactureSchematic::initializeTransientMembers() {
	ManufactureSchematicImplementation* _implementation = (ManufactureSchematicImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

void ManufactureSchematic::fillAttributeList(AttributeListMessage* msg, PlayerCreature* object) {
	ManufactureSchematicImplementation* _implementation = (ManufactureSchematicImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->fillAttributeList(msg, object);
}

void ManufactureSchematic::sendTo(SceneObject* player, bool doClose) {
	ManufactureSchematicImplementation* _implementation = (ManufactureSchematicImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addObjectParameter(player);
		method.addBooleanParameter(doClose);

		method.executeWithVoidReturn();
	} else
		_implementation->sendTo(player, doClose);
}

void ManufactureSchematic::sendBaselinesTo(SceneObject* player) {
	ManufactureSchematicImplementation* _implementation = (ManufactureSchematicImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->sendBaselinesTo(player);
}

void ManufactureSchematic::synchronizedUIListen(SceneObject* player, int value) {
	ManufactureSchematicImplementation* _implementation = (ManufactureSchematicImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addObjectParameter(player);
		method.addSignedIntParameter(value);

		method.executeWithVoidReturn();
	} else
		_implementation->synchronizedUIListen(player, value);
}

void ManufactureSchematic::synchronizedUIStopListen(SceneObject* player, int value) {
	ManufactureSchematicImplementation* _implementation = (ManufactureSchematicImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addObjectParameter(player);
		method.addSignedIntParameter(value);

		method.executeWithVoidReturn();
	} else
		_implementation->synchronizedUIStopListen(player, value);
}

void ManufactureSchematic::updateToDatabaseAllObjects(bool startTask) {
	ManufactureSchematicImplementation* _implementation = (ManufactureSchematicImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);
		method.addBooleanParameter(startTask);

		method.executeWithVoidReturn();
	} else
		_implementation->updateToDatabaseAllObjects(startTask);
}

bool ManufactureSchematic::isManufactureSchematic() {
	ManufactureSchematicImplementation* _implementation = (ManufactureSchematicImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isManufactureSchematic();
}

void ManufactureSchematic::setDraftSchematic(SceneObject* craftingTool, DraftSchematic* schematic) {
	ManufactureSchematicImplementation* _implementation = (ManufactureSchematicImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);
		method.addObjectParameter(craftingTool);
		method.addObjectParameter(schematic);

		method.executeWithVoidReturn();
	} else
		_implementation->setDraftSchematic(craftingTool, schematic);
}

void ManufactureSchematic::initializeIngredientSlots(SceneObject* craftingTool, DraftSchematic* schematic) {
	ManufactureSchematicImplementation* _implementation = (ManufactureSchematicImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);
		method.addObjectParameter(craftingTool);
		method.addObjectParameter(schematic);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeIngredientSlots(craftingTool, schematic);
}

void ManufactureSchematic::cleanupIngredientSlots() {
	ManufactureSchematicImplementation* _implementation = (ManufactureSchematicImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);

		method.executeWithVoidReturn();
	} else
		_implementation->cleanupIngredientSlots();
}

DraftSchematic* ManufactureSchematic::getDraftSchematic() {
	ManufactureSchematicImplementation* _implementation = (ManufactureSchematicImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);

		return (DraftSchematic*) method.executeWithObjectReturn();
	} else
		return _implementation->getDraftSchematic();
}

Reference<IngredientSlot*> ManufactureSchematic::getIngredientSlot(int index) {
	ManufactureSchematicImplementation* _implementation = (ManufactureSchematicImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getIngredientSlot(index);
}

int ManufactureSchematic::getSlotCount() {
	ManufactureSchematicImplementation* _implementation = (ManufactureSchematicImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getSlotCount();
}

void ManufactureSchematic::increaseComplexity() {
	ManufactureSchematicImplementation* _implementation = (ManufactureSchematicImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);

		method.executeWithVoidReturn();
	} else
		_implementation->increaseComplexity();
}

void ManufactureSchematic::decreaseComplexity() {
	ManufactureSchematicImplementation* _implementation = (ManufactureSchematicImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 19);

		method.executeWithVoidReturn();
	} else
		_implementation->decreaseComplexity();
}

float ManufactureSchematic::getComplexity() {
	ManufactureSchematicImplementation* _implementation = (ManufactureSchematicImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 20);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getComplexity();
}

bool ManufactureSchematic::isFirstCraftingUpdate() {
	ManufactureSchematicImplementation* _implementation = (ManufactureSchematicImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 21);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isFirstCraftingUpdate();
}

void ManufactureSchematic::setFirstCraftingUpdateComplete() {
	ManufactureSchematicImplementation* _implementation = (ManufactureSchematicImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 22);

		method.executeWithVoidReturn();
	} else
		_implementation->setFirstCraftingUpdateComplete();
}

bool ManufactureSchematic::isReadyForAssembly() {
	ManufactureSchematicImplementation* _implementation = (ManufactureSchematicImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 23);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isReadyForAssembly();
}

void ManufactureSchematic::setAssembled() {
	ManufactureSchematicImplementation* _implementation = (ManufactureSchematicImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 24);

		method.executeWithVoidReturn();
	} else
		_implementation->setAssembled();
}

bool ManufactureSchematic::isAssembled() {
	ManufactureSchematicImplementation* _implementation = (ManufactureSchematicImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 25);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isAssembled();
}

void ManufactureSchematic::setCompleted() {
	ManufactureSchematicImplementation* _implementation = (ManufactureSchematicImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 26);

		method.executeWithVoidReturn();
	} else
		_implementation->setCompleted();
}

bool ManufactureSchematic::isCompleted() {
	ManufactureSchematicImplementation* _implementation = (ManufactureSchematicImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 27);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isCompleted();
}

void ManufactureSchematic::setCrafter(PlayerCreature* player) {
	ManufactureSchematicImplementation* _implementation = (ManufactureSchematicImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 28);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->setCrafter(player);
}

PlayerCreature* ManufactureSchematic::getCrafter() {
	ManufactureSchematicImplementation* _implementation = (ManufactureSchematicImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 29);

		return (PlayerCreature*) method.executeWithObjectReturn();
	} else
		return _implementation->getCrafter();
}

CraftingValues* ManufactureSchematic::getCraftingValues() {
	ManufactureSchematicImplementation* _implementation = (ManufactureSchematicImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getCraftingValues();
}

void ManufactureSchematic::setExperimentingCounter(int value) {
	ManufactureSchematicImplementation* _implementation = (ManufactureSchematicImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 30);
		method.addSignedIntParameter(value);

		method.executeWithVoidReturn();
	} else
		_implementation->setExperimentingCounter(value);
}

int ManufactureSchematic::getExperimentingCounter() {
	ManufactureSchematicImplementation* _implementation = (ManufactureSchematicImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 31);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getExperimentingCounter();
}

int ManufactureSchematic::getExperimentingCounterPrevious() {
	ManufactureSchematicImplementation* _implementation = (ManufactureSchematicImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 32);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getExperimentingCounterPrevious();
}

void ManufactureSchematic::setManufactureLimit(int limit) {
	ManufactureSchematicImplementation* _implementation = (ManufactureSchematicImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 33);
		method.addSignedIntParameter(limit);

		method.executeWithVoidReturn();
	} else
		_implementation->setManufactureLimit(limit);
}

int ManufactureSchematic::getManufactureLimit() {
	ManufactureSchematicImplementation* _implementation = (ManufactureSchematicImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 34);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getManufactureLimit();
}

void ManufactureSchematic::setPrototype(TangibleObject* tano) {
	ManufactureSchematicImplementation* _implementation = (ManufactureSchematicImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 35);
		method.addObjectParameter(tano);

		method.executeWithVoidReturn();
	} else
		_implementation->setPrototype(tano);
}

TangibleObject* ManufactureSchematic::getPrototype() {
	ManufactureSchematicImplementation* _implementation = (ManufactureSchematicImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 36);

		return (TangibleObject*) method.executeWithObjectReturn();
	} else
		return _implementation->getPrototype();
}

void ManufactureSchematic::initializeFactoryIngredients() {
	ManufactureSchematicImplementation* _implementation = (ManufactureSchematicImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 37);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeFactoryIngredients();
}

int ManufactureSchematic::getFactoryIngredientsSize() {
	ManufactureSchematicImplementation* _implementation = (ManufactureSchematicImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 38);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getFactoryIngredientsSize();
}

SceneObject* ManufactureSchematic::getFactoryIngredient(int i) {
	ManufactureSchematicImplementation* _implementation = (ManufactureSchematicImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 39);
		method.addSignedIntParameter(i);

		return (SceneObject*) method.executeWithObjectReturn();
	} else
		return _implementation->getFactoryIngredient(i);
}

DistributedObjectServant* ManufactureSchematic::_getImplementation() {

	_updated = true;
	return _impl;
}

void ManufactureSchematic::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;}

/*
 *	ManufactureSchematicImplementation
 */

ManufactureSchematicImplementation::ManufactureSchematicImplementation(DummyConstructorParameter* param) : IntangibleObjectImplementation(param) {
	_initializeImplementation();
}


ManufactureSchematicImplementation::~ManufactureSchematicImplementation() {
}


void ManufactureSchematicImplementation::finalize() {
}

void ManufactureSchematicImplementation::_initializeImplementation() {
	_setClassHelper(ManufactureSchematicHelper::instance());

	_serializationHelperMethod();
}

void ManufactureSchematicImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (ManufactureSchematic*) stub;
	IntangibleObjectImplementation::_setStub(stub);
}

DistributedObjectStub* ManufactureSchematicImplementation::_getStub() {
	return _this;
}

ManufactureSchematicImplementation::operator const ManufactureSchematic*() {
	return _this;
}

void ManufactureSchematicImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void ManufactureSchematicImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void ManufactureSchematicImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void ManufactureSchematicImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void ManufactureSchematicImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void ManufactureSchematicImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void ManufactureSchematicImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void ManufactureSchematicImplementation::_serializationHelperMethod() {
	IntangibleObjectImplementation::_serializationHelperMethod();

	_setClassName("ManufactureSchematic");

	addSerializableVariable("draftSchematic", &draftSchematic);
	addSerializableVariable("prototype", &prototype);
	addSerializableVariable("dataSize", &dataSize);
	addSerializableVariable("manufactureLimit", &manufactureLimit);
	addSerializableVariable("complexity", &complexity);
	addSerializableVariable("crcToSend", &crcToSend);
	addSerializableVariable("crafter", &crafter);
	addSerializableVariable("firstCraftingUpdate", &firstCraftingUpdate);
	addSerializableVariable("factoryIngredients", &factoryIngredients);
	addSerializableVariable("ingredientSlots", &ingredientSlots);
	addSerializableVariable("assembled", &assembled);
	addSerializableVariable("completed", &completed);
	addSerializableVariable("experimentingCounter", &experimentingCounter);
	addSerializableVariable("experimentingCounterPrevious", &experimentingCounterPrevious);
	addSerializableVariable("craftingValues", &craftingValues);
	addSerializableVariable("customizationOptions", &customizationOptions);
	addSerializableVariable("customizationDefaultValues", &customizationDefaultValues);
}

ManufactureSchematicImplementation::ManufactureSchematicImplementation() {
	_initializeImplementation();
	// server/zone/objects/manufactureschematic/ManufactureSchematic.idl(94):  		Logger.setLoggingName("ManufactureSchematic");
	Logger::setLoggingName("ManufactureSchematic");
	// server/zone/objects/manufactureschematic/ManufactureSchematic.idl(95):  		prototype = null;
	prototype = NULL;
	// server/zone/objects/manufactureschematic/ManufactureSchematic.idl(96):  		firstCraftingUpdate = true;
	firstCraftingUpdate = true;
}

void ManufactureSchematicImplementation::initializeTransientMembers() {
	// server/zone/objects/manufactureschematic/ManufactureSchematic.idl(100):  		super.initializeTransientMembers();
	IntangibleObjectImplementation::initializeTransientMembers();
}

bool ManufactureSchematicImplementation::isManufactureSchematic() {
	// server/zone/objects/manufactureschematic/ManufactureSchematic.idl(152):  		return true;
	return true;
}

DraftSchematic* ManufactureSchematicImplementation::getDraftSchematic() {
	// server/zone/objects/manufactureschematic/ManufactureSchematic.idl(162):  		return draftSchematic;
	return draftSchematic;
}

void ManufactureSchematicImplementation::increaseComplexity() {
	// server/zone/objects/manufactureschematic/ManufactureSchematic.idl(172):  		complexity++;
	complexity ++;
}

void ManufactureSchematicImplementation::decreaseComplexity() {
	// server/zone/objects/manufactureschematic/ManufactureSchematic.idl(176):  	}
	if (complexity > 1)	// server/zone/objects/manufactureschematic/ManufactureSchematic.idl(177):  			complexity = complexity - 1;
	complexity = complexity - 1;
}

float ManufactureSchematicImplementation::getComplexity() {
	// server/zone/objects/manufactureschematic/ManufactureSchematic.idl(181):  		return complexity;
	return complexity;
}

bool ManufactureSchematicImplementation::isFirstCraftingUpdate() {
	// server/zone/objects/manufactureschematic/ManufactureSchematic.idl(185):  		return firstCraftingUpdate;
	return firstCraftingUpdate;
}

void ManufactureSchematicImplementation::setFirstCraftingUpdateComplete() {
	// server/zone/objects/manufactureschematic/ManufactureSchematic.idl(189):  		firstCraftingUpdate = false;
	firstCraftingUpdate = false;
}

void ManufactureSchematicImplementation::setAssembled() {
	// server/zone/objects/manufactureschematic/ManufactureSchematic.idl(195):  		assembled = true;
	assembled = true;
}

bool ManufactureSchematicImplementation::isAssembled() {
	// server/zone/objects/manufactureschematic/ManufactureSchematic.idl(199):  		return assembled;
	return assembled;
}

void ManufactureSchematicImplementation::setCompleted() {
	// server/zone/objects/manufactureschematic/ManufactureSchematic.idl(203):  		completed = true;
	completed = true;
}

bool ManufactureSchematicImplementation::isCompleted() {
	// server/zone/objects/manufactureschematic/ManufactureSchematic.idl(207):  		return completed;
	return completed;
}

void ManufactureSchematicImplementation::setCrafter(PlayerCreature* player) {
	// server/zone/objects/manufactureschematic/ManufactureSchematic.idl(211):  		crafter = player;
	crafter = player;
}

PlayerCreature* ManufactureSchematicImplementation::getCrafter() {
	// server/zone/objects/manufactureschematic/ManufactureSchematic.idl(215):  		return crafter;
	return crafter;
}

CraftingValues* ManufactureSchematicImplementation::getCraftingValues() {
	// server/zone/objects/manufactureschematic/ManufactureSchematic.idl(220):  		return craftingValues;
	return (&craftingValues);
}

void ManufactureSchematicImplementation::setExperimentingCounter(int value) {
	// server/zone/objects/manufactureschematic/ManufactureSchematic.idl(224):  		experimentingCounterPrevious = experimentingCounter;
	experimentingCounterPrevious = experimentingCounter;
	// server/zone/objects/manufactureschematic/ManufactureSchematic.idl(225):  		experimentingCounter = value;
	experimentingCounter = value;
}

int ManufactureSchematicImplementation::getExperimentingCounter() {
	// server/zone/objects/manufactureschematic/ManufactureSchematic.idl(229):  		return experimentingCounter;
	return experimentingCounter;
}

int ManufactureSchematicImplementation::getExperimentingCounterPrevious() {
	// server/zone/objects/manufactureschematic/ManufactureSchematic.idl(233):  		return experimentingCounterPrevious;
	return experimentingCounterPrevious;
}

void ManufactureSchematicImplementation::setManufactureLimit(int limit) {
	// server/zone/objects/manufactureschematic/ManufactureSchematic.idl(237):  		manufactureLimit = limit;
	manufactureLimit = limit;
}

int ManufactureSchematicImplementation::getManufactureLimit() {
	// server/zone/objects/manufactureschematic/ManufactureSchematic.idl(241):  		return manufactureLimit;
	return manufactureLimit;
}

TangibleObject* ManufactureSchematicImplementation::getPrototype() {
	// server/zone/objects/manufactureschematic/ManufactureSchematic.idl(247):  		return prototype;
	return prototype;
}

int ManufactureSchematicImplementation::getFactoryIngredientsSize() {
	// server/zone/objects/manufactureschematic/ManufactureSchematic.idl(253):  		return factoryIngredients.size();
	return (&factoryIngredients)->size();
}

SceneObject* ManufactureSchematicImplementation::getFactoryIngredient(int i) {
	// server/zone/objects/manufactureschematic/ManufactureSchematic.idl(257):  		return factoryIngredients.get(i);
	return (&factoryIngredients)->get(i);
}

/*
 *	ManufactureSchematicAdapter
 */

ManufactureSchematicAdapter::ManufactureSchematicAdapter(ManufactureSchematicImplementation* obj) : IntangibleObjectAdapter(obj) {
}

Packet* ManufactureSchematicAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		initializeTransientMembers();
		break;
	case 7:
		sendTo((SceneObject*) inv->getObjectParameter(), inv->getBooleanParameter());
		break;
	case 8:
		sendBaselinesTo((SceneObject*) inv->getObjectParameter());
		break;
	case 9:
		synchronizedUIListen((SceneObject*) inv->getObjectParameter(), inv->getSignedIntParameter());
		break;
	case 10:
		synchronizedUIStopListen((SceneObject*) inv->getObjectParameter(), inv->getSignedIntParameter());
		break;
	case 11:
		updateToDatabaseAllObjects(inv->getBooleanParameter());
		break;
	case 12:
		resp->insertBoolean(isManufactureSchematic());
		break;
	case 13:
		setDraftSchematic((SceneObject*) inv->getObjectParameter(), (DraftSchematic*) inv->getObjectParameter());
		break;
	case 14:
		initializeIngredientSlots((SceneObject*) inv->getObjectParameter(), (DraftSchematic*) inv->getObjectParameter());
		break;
	case 15:
		cleanupIngredientSlots();
		break;
	case 16:
		resp->insertLong(getDraftSchematic()->_getObjectID());
		break;
	case 17:
		resp->insertSignedInt(getSlotCount());
		break;
	case 18:
		increaseComplexity();
		break;
	case 19:
		decreaseComplexity();
		break;
	case 20:
		resp->insertFloat(getComplexity());
		break;
	case 21:
		resp->insertBoolean(isFirstCraftingUpdate());
		break;
	case 22:
		setFirstCraftingUpdateComplete();
		break;
	case 23:
		resp->insertBoolean(isReadyForAssembly());
		break;
	case 24:
		setAssembled();
		break;
	case 25:
		resp->insertBoolean(isAssembled());
		break;
	case 26:
		setCompleted();
		break;
	case 27:
		resp->insertBoolean(isCompleted());
		break;
	case 28:
		setCrafter((PlayerCreature*) inv->getObjectParameter());
		break;
	case 29:
		resp->insertLong(getCrafter()->_getObjectID());
		break;
	case 30:
		setExperimentingCounter(inv->getSignedIntParameter());
		break;
	case 31:
		resp->insertSignedInt(getExperimentingCounter());
		break;
	case 32:
		resp->insertSignedInt(getExperimentingCounterPrevious());
		break;
	case 33:
		setManufactureLimit(inv->getSignedIntParameter());
		break;
	case 34:
		resp->insertSignedInt(getManufactureLimit());
		break;
	case 35:
		setPrototype((TangibleObject*) inv->getObjectParameter());
		break;
	case 36:
		resp->insertLong(getPrototype()->_getObjectID());
		break;
	case 37:
		initializeFactoryIngredients();
		break;
	case 38:
		resp->insertSignedInt(getFactoryIngredientsSize());
		break;
	case 39:
		resp->insertLong(getFactoryIngredient(inv->getSignedIntParameter())->_getObjectID());
		break;
	default:
		return NULL;
	}

	return resp;
}

void ManufactureSchematicAdapter::initializeTransientMembers() {
	((ManufactureSchematicImplementation*) impl)->initializeTransientMembers();
}

void ManufactureSchematicAdapter::sendTo(SceneObject* player, bool doClose) {
	((ManufactureSchematicImplementation*) impl)->sendTo(player, doClose);
}

void ManufactureSchematicAdapter::sendBaselinesTo(SceneObject* player) {
	((ManufactureSchematicImplementation*) impl)->sendBaselinesTo(player);
}

void ManufactureSchematicAdapter::synchronizedUIListen(SceneObject* player, int value) {
	((ManufactureSchematicImplementation*) impl)->synchronizedUIListen(player, value);
}

void ManufactureSchematicAdapter::synchronizedUIStopListen(SceneObject* player, int value) {
	((ManufactureSchematicImplementation*) impl)->synchronizedUIStopListen(player, value);
}

void ManufactureSchematicAdapter::updateToDatabaseAllObjects(bool startTask) {
	((ManufactureSchematicImplementation*) impl)->updateToDatabaseAllObjects(startTask);
}

bool ManufactureSchematicAdapter::isManufactureSchematic() {
	return ((ManufactureSchematicImplementation*) impl)->isManufactureSchematic();
}

void ManufactureSchematicAdapter::setDraftSchematic(SceneObject* craftingTool, DraftSchematic* schematic) {
	((ManufactureSchematicImplementation*) impl)->setDraftSchematic(craftingTool, schematic);
}

void ManufactureSchematicAdapter::initializeIngredientSlots(SceneObject* craftingTool, DraftSchematic* schematic) {
	((ManufactureSchematicImplementation*) impl)->initializeIngredientSlots(craftingTool, schematic);
}

void ManufactureSchematicAdapter::cleanupIngredientSlots() {
	((ManufactureSchematicImplementation*) impl)->cleanupIngredientSlots();
}

DraftSchematic* ManufactureSchematicAdapter::getDraftSchematic() {
	return ((ManufactureSchematicImplementation*) impl)->getDraftSchematic();
}

int ManufactureSchematicAdapter::getSlotCount() {
	return ((ManufactureSchematicImplementation*) impl)->getSlotCount();
}

void ManufactureSchematicAdapter::increaseComplexity() {
	((ManufactureSchematicImplementation*) impl)->increaseComplexity();
}

void ManufactureSchematicAdapter::decreaseComplexity() {
	((ManufactureSchematicImplementation*) impl)->decreaseComplexity();
}

float ManufactureSchematicAdapter::getComplexity() {
	return ((ManufactureSchematicImplementation*) impl)->getComplexity();
}

bool ManufactureSchematicAdapter::isFirstCraftingUpdate() {
	return ((ManufactureSchematicImplementation*) impl)->isFirstCraftingUpdate();
}

void ManufactureSchematicAdapter::setFirstCraftingUpdateComplete() {
	((ManufactureSchematicImplementation*) impl)->setFirstCraftingUpdateComplete();
}

bool ManufactureSchematicAdapter::isReadyForAssembly() {
	return ((ManufactureSchematicImplementation*) impl)->isReadyForAssembly();
}

void ManufactureSchematicAdapter::setAssembled() {
	((ManufactureSchematicImplementation*) impl)->setAssembled();
}

bool ManufactureSchematicAdapter::isAssembled() {
	return ((ManufactureSchematicImplementation*) impl)->isAssembled();
}

void ManufactureSchematicAdapter::setCompleted() {
	((ManufactureSchematicImplementation*) impl)->setCompleted();
}

bool ManufactureSchematicAdapter::isCompleted() {
	return ((ManufactureSchematicImplementation*) impl)->isCompleted();
}

void ManufactureSchematicAdapter::setCrafter(PlayerCreature* player) {
	((ManufactureSchematicImplementation*) impl)->setCrafter(player);
}

PlayerCreature* ManufactureSchematicAdapter::getCrafter() {
	return ((ManufactureSchematicImplementation*) impl)->getCrafter();
}

void ManufactureSchematicAdapter::setExperimentingCounter(int value) {
	((ManufactureSchematicImplementation*) impl)->setExperimentingCounter(value);
}

int ManufactureSchematicAdapter::getExperimentingCounter() {
	return ((ManufactureSchematicImplementation*) impl)->getExperimentingCounter();
}

int ManufactureSchematicAdapter::getExperimentingCounterPrevious() {
	return ((ManufactureSchematicImplementation*) impl)->getExperimentingCounterPrevious();
}

void ManufactureSchematicAdapter::setManufactureLimit(int limit) {
	((ManufactureSchematicImplementation*) impl)->setManufactureLimit(limit);
}

int ManufactureSchematicAdapter::getManufactureLimit() {
	return ((ManufactureSchematicImplementation*) impl)->getManufactureLimit();
}

void ManufactureSchematicAdapter::setPrototype(TangibleObject* tano) {
	((ManufactureSchematicImplementation*) impl)->setPrototype(tano);
}

TangibleObject* ManufactureSchematicAdapter::getPrototype() {
	return ((ManufactureSchematicImplementation*) impl)->getPrototype();
}

void ManufactureSchematicAdapter::initializeFactoryIngredients() {
	((ManufactureSchematicImplementation*) impl)->initializeFactoryIngredients();
}

int ManufactureSchematicAdapter::getFactoryIngredientsSize() {
	return ((ManufactureSchematicImplementation*) impl)->getFactoryIngredientsSize();
}

SceneObject* ManufactureSchematicAdapter::getFactoryIngredient(int i) {
	return ((ManufactureSchematicImplementation*) impl)->getFactoryIngredient(i);
}

/*
 *	ManufactureSchematicHelper
 */

ManufactureSchematicHelper* ManufactureSchematicHelper::staticInitializer = ManufactureSchematicHelper::instance();

ManufactureSchematicHelper::ManufactureSchematicHelper() {
	className = "ManufactureSchematic";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void ManufactureSchematicHelper::finalizeHelper() {
	ManufactureSchematicHelper::finalize();
}

DistributedObject* ManufactureSchematicHelper::instantiateObject() {
	return new ManufactureSchematic(DummyConstructorParameter::instance());
}

DistributedObjectServant* ManufactureSchematicHelper::instantiateServant() {
	return new ManufactureSchematicImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* ManufactureSchematicHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new ManufactureSchematicAdapter((ManufactureSchematicImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

