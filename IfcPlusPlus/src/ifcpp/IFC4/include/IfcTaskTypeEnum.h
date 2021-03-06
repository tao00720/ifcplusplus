/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"

// TYPE IfcTaskTypeEnum = ENUMERATION OF	(ATTENDANCE	,CONSTRUCTION	,DEMOLITION	,DISMANTLE	,DISPOSAL	,INSTALLATION	,LOGISTIC	,MAINTENANCE	,MOVE	,OPERATION	,REMOVAL	,RENOVATION	,USERDEFINED	,NOTDEFINED);
class IFCPP_EXPORT IfcTaskTypeEnum : virtual public IfcPPObject
{
public:
	enum IfcTaskTypeEnumEnum
	{
		ENUM_ATTENDANCE,
		ENUM_CONSTRUCTION,
		ENUM_DEMOLITION,
		ENUM_DISMANTLE,
		ENUM_DISPOSAL,
		ENUM_INSTALLATION,
		ENUM_LOGISTIC,
		ENUM_MAINTENANCE,
		ENUM_MOVE,
		ENUM_OPERATION,
		ENUM_REMOVAL,
		ENUM_RENOVATION,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcTaskTypeEnum();
	IfcTaskTypeEnum( IfcTaskTypeEnumEnum e ) { m_enum = e; }
	~IfcTaskTypeEnum();
	virtual const char* className() const { return "IfcTaskTypeEnum"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	static shared_ptr<IfcTaskTypeEnum> createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map );
	IfcTaskTypeEnumEnum m_enum;
};

