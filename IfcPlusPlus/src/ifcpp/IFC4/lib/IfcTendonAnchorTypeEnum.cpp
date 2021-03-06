/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcTendonAnchorTypeEnum.h"

// TYPE IfcTendonAnchorTypeEnum = ENUMERATION OF	(COUPLER	,FIXED_END	,TENSIONING_END	,USERDEFINED	,NOTDEFINED);
IfcTendonAnchorTypeEnum::IfcTendonAnchorTypeEnum() {}
IfcTendonAnchorTypeEnum::~IfcTendonAnchorTypeEnum() {}
shared_ptr<IfcPPObject> IfcTendonAnchorTypeEnum::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcTendonAnchorTypeEnum> copy_self( new IfcTendonAnchorTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcTendonAnchorTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCTENDONANCHORTYPEENUM("; }
	if( m_enum == ENUM_COUPLER )
	{
		stream << ".COUPLER.";
	}
	else if( m_enum == ENUM_FIXED_END )
	{
		stream << ".FIXED_END.";
	}
	else if( m_enum == ENUM_TENSIONING_END )
	{
		stream << ".TENSIONING_END.";
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
shared_ptr<IfcTendonAnchorTypeEnum> IfcTendonAnchorTypeEnum::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcTendonAnchorTypeEnum>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcTendonAnchorTypeEnum>(); }
	shared_ptr<IfcTendonAnchorTypeEnum> type_object( new IfcTendonAnchorTypeEnum() );
	if( boost::iequals( arg, L".COUPLER." ) )
	{
		type_object->m_enum = IfcTendonAnchorTypeEnum::ENUM_COUPLER;
	}
	else if( boost::iequals( arg, L".FIXED_END." ) )
	{
		type_object->m_enum = IfcTendonAnchorTypeEnum::ENUM_FIXED_END;
	}
	else if( boost::iequals( arg, L".TENSIONING_END." ) )
	{
		type_object->m_enum = IfcTendonAnchorTypeEnum::ENUM_TENSIONING_END;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcTendonAnchorTypeEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcTendonAnchorTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
