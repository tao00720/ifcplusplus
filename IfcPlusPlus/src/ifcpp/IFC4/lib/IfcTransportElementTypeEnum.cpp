/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcTransportElementTypeEnum.h"

// TYPE IfcTransportElementTypeEnum = ENUMERATION OF	(ELEVATOR	,ESCALATOR	,MOVINGWALKWAY	,CRANEWAY	,LIFTINGGEAR	,USERDEFINED	,NOTDEFINED);
IfcTransportElementTypeEnum::IfcTransportElementTypeEnum() {}
IfcTransportElementTypeEnum::~IfcTransportElementTypeEnum() {}
shared_ptr<IfcPPObject> IfcTransportElementTypeEnum::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcTransportElementTypeEnum> copy_self( new IfcTransportElementTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcTransportElementTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCTRANSPORTELEMENTTYPEENUM("; }
	if( m_enum == ENUM_ELEVATOR )
	{
		stream << ".ELEVATOR.";
	}
	else if( m_enum == ENUM_ESCALATOR )
	{
		stream << ".ESCALATOR.";
	}
	else if( m_enum == ENUM_MOVINGWALKWAY )
	{
		stream << ".MOVINGWALKWAY.";
	}
	else if( m_enum == ENUM_CRANEWAY )
	{
		stream << ".CRANEWAY.";
	}
	else if( m_enum == ENUM_LIFTINGGEAR )
	{
		stream << ".LIFTINGGEAR.";
	}
	else if( m_enum == ENUM_USERDEFINED )
	{
		stream << ".USERDEFINED.";
	}
	else if( m_enum == ENUM_NOTDEFINED )
	{
		stream << ".NOTDEFINED.";
	}
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IfcTransportElementTypeEnum> IfcTransportElementTypeEnum::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcTransportElementTypeEnum>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcTransportElementTypeEnum>(); }
	shared_ptr<IfcTransportElementTypeEnum> type_object( new IfcTransportElementTypeEnum() );
	if( boost::iequals( arg, L".ELEVATOR." ) )
	{
		type_object->m_enum = IfcTransportElementTypeEnum::ENUM_ELEVATOR;
	}
	else if( boost::iequals( arg, L".ESCALATOR." ) )
	{
		type_object->m_enum = IfcTransportElementTypeEnum::ENUM_ESCALATOR;
	}
	else if( boost::iequals( arg, L".MOVINGWALKWAY." ) )
	{
		type_object->m_enum = IfcTransportElementTypeEnum::ENUM_MOVINGWALKWAY;
	}
	else if( boost::iequals( arg, L".CRANEWAY." ) )
	{
		type_object->m_enum = IfcTransportElementTypeEnum::ENUM_CRANEWAY;
	}
	else if( boost::iequals( arg, L".LIFTINGGEAR." ) )
	{
		type_object->m_enum = IfcTransportElementTypeEnum::ENUM_LIFTINGGEAR;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcTransportElementTypeEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcTransportElementTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
