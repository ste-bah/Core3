/*
 *	server/zone/objects/tangible/terminal/city/CityTerminal.cpp generated by engine3 IDL compiler 0.60
 */

#include "CityTerminal.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/player/PlayerCreature.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

#include "server/zone/Zone.h"

#include "server/zone/objects/building/city/CityHallObject.h"

/*
 *	CityTerminalStub
 */

CityTerminal::CityTerminal() : Terminal(DummyConstructorParameter::instance()) {
	CityTerminalImplementation* _implementation = new CityTerminalImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
}

CityTerminal::CityTerminal(DummyConstructorParameter* param) : Terminal(param) {
}

CityTerminal::~CityTerminal() {
}


void CityTerminal::initializeTransientMembers() {
	CityTerminalImplementation* _implementation = (CityTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

void CityTerminal::fillObjectMenuResponse(ObjectMenuResponse* menuResponse, PlayerCreature* player) {
	CityTerminalImplementation* _implementation = (CityTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addObjectParameter(menuResponse);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->fillObjectMenuResponse(menuResponse, player);
}

int CityTerminal::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	CityTerminalImplementation* _implementation = (CityTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addObjectParameter(player);
		method.addByteParameter(selectedID);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->handleObjectMenuSelect(player, selectedID);
}

bool CityTerminal::isCityTerminal() {
	CityTerminalImplementation* _implementation = (CityTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isCityTerminal();
}

void CityTerminal::setCityHallObject(CityHallObject* cityHall) {
	CityTerminalImplementation* _implementation = (CityTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addObjectParameter(cityHall);

		method.executeWithVoidReturn();
	} else
		_implementation->setCityHallObject(cityHall);
}

CityHallObject* CityTerminal::getCityHallObject() {
	CityTerminalImplementation* _implementation = (CityTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);

		return (CityHallObject*) method.executeWithObjectReturn();
	} else
		return _implementation->getCityHallObject();
}

DistributedObjectServant* CityTerminal::_getImplementation() {

	_updated = true;
	return _impl;
}

void CityTerminal::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;}

/*
 *	CityTerminalImplementation
 */

CityTerminalImplementation::CityTerminalImplementation(DummyConstructorParameter* param) : TerminalImplementation(param) {
	_initializeImplementation();
}


CityTerminalImplementation::~CityTerminalImplementation() {
}


void CityTerminalImplementation::finalize() {
}

void CityTerminalImplementation::_initializeImplementation() {
	_setClassHelper(CityTerminalHelper::instance());

	_serializationHelperMethod();
}

void CityTerminalImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (CityTerminal*) stub;
	TerminalImplementation::_setStub(stub);
}

DistributedObjectStub* CityTerminalImplementation::_getStub() {
	return _this;
}

CityTerminalImplementation::operator const CityTerminal*() {
	return _this;
}

void CityTerminalImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void CityTerminalImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void CityTerminalImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void CityTerminalImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void CityTerminalImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void CityTerminalImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void CityTerminalImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void CityTerminalImplementation::_serializationHelperMethod() {
	TerminalImplementation::_serializationHelperMethod();

	_setClassName("CityTerminal");

	addSerializableVariable("cityHallObject", &cityHallObject);
}

CityTerminalImplementation::CityTerminalImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/terminal/city/CityTerminal.idl(60):  		Logger.setLoggingName("CityTerminal");
	Logger::setLoggingName("CityTerminal");
}

void CityTerminalImplementation::initializeTransientMembers() {
	// server/zone/objects/tangible/terminal/city/CityTerminal.idl(63):  		super.initializeTransientMembers();
	TerminalImplementation::initializeTransientMembers();
	// server/zone/objects/tangible/terminal/city/CityTerminal.idl(65):  		Logger.setLoggingName("CityTerminal");
	Logger::setLoggingName("CityTerminal");
}

bool CityTerminalImplementation::isCityTerminal() {
	// server/zone/objects/tangible/terminal/city/CityTerminal.idl(73):  		return true;
	return true;
}

void CityTerminalImplementation::setCityHallObject(CityHallObject* cityHall) {
	// server/zone/objects/tangible/terminal/city/CityTerminal.idl(77):  		cityHallObject = cityHall;
	cityHallObject = cityHall;
}

CityHallObject* CityTerminalImplementation::getCityHallObject() {
	// server/zone/objects/tangible/terminal/city/CityTerminal.idl(81):  		return cityHallObject;
	return cityHallObject;
}

/*
 *	CityTerminalAdapter
 */

CityTerminalAdapter::CityTerminalAdapter(CityTerminalImplementation* obj) : TerminalAdapter(obj) {
}

Packet* CityTerminalAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		initializeTransientMembers();
		break;
	case 7:
		fillObjectMenuResponse((ObjectMenuResponse*) inv->getObjectParameter(), (PlayerCreature*) inv->getObjectParameter());
		break;
	case 8:
		resp->insertSignedInt(handleObjectMenuSelect((PlayerCreature*) inv->getObjectParameter(), inv->getByteParameter()));
		break;
	case 9:
		resp->insertBoolean(isCityTerminal());
		break;
	case 10:
		setCityHallObject((CityHallObject*) inv->getObjectParameter());
		break;
	case 11:
		resp->insertLong(getCityHallObject()->_getObjectID());
		break;
	default:
		return NULL;
	}

	return resp;
}

void CityTerminalAdapter::initializeTransientMembers() {
	((CityTerminalImplementation*) impl)->initializeTransientMembers();
}

void CityTerminalAdapter::fillObjectMenuResponse(ObjectMenuResponse* menuResponse, PlayerCreature* player) {
	((CityTerminalImplementation*) impl)->fillObjectMenuResponse(menuResponse, player);
}

int CityTerminalAdapter::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	return ((CityTerminalImplementation*) impl)->handleObjectMenuSelect(player, selectedID);
}

bool CityTerminalAdapter::isCityTerminal() {
	return ((CityTerminalImplementation*) impl)->isCityTerminal();
}

void CityTerminalAdapter::setCityHallObject(CityHallObject* cityHall) {
	((CityTerminalImplementation*) impl)->setCityHallObject(cityHall);
}

CityHallObject* CityTerminalAdapter::getCityHallObject() {
	return ((CityTerminalImplementation*) impl)->getCityHallObject();
}

/*
 *	CityTerminalHelper
 */

CityTerminalHelper* CityTerminalHelper::staticInitializer = CityTerminalHelper::instance();

CityTerminalHelper::CityTerminalHelper() {
	className = "CityTerminal";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void CityTerminalHelper::finalizeHelper() {
	CityTerminalHelper::finalize();
}

DistributedObject* CityTerminalHelper::instantiateObject() {
	return new CityTerminal(DummyConstructorParameter::instance());
}

DistributedObjectServant* CityTerminalHelper::instantiateServant() {
	return new CityTerminalImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* CityTerminalHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new CityTerminalAdapter((CityTerminalImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

