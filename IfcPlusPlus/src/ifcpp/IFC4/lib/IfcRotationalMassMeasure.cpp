/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcDerivedMeasureValue.h"
#include "ifcpp/IFC4/include/IfcRotationalMassMeasure.h"

// TYPE IfcRotationalMassMeasure = REAL;
IfcRotationalMassMeasure::IfcRotationalMassMeasure() {}
IfcRotationalMassMeasure::IfcRotationalMassMeasure( double value ) { m_value = value; }
IfcRotationalMassMeasure::~IfcRotationalMassMeasure() {}
shared_ptr<IfcPPObject> IfcRotationalMassMeasure::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcRotationalMassMeasure> copy_self( new IfcRotationalMassMeasure() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcRotationalMassMeasure::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCROTATIONALMASSMEASURE("; }
	stream << m_value;
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IfcRotationalMassMeasure> IfcRotationalMassMeasure::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcRotationalMassMeasure>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcRotationalMassMeasure>(); }
	shared_ptr<IfcRotationalMassMeasure> type_object( new IfcRotationalMassMeasure() );
	readReal( arg, type_object->m_value );
	return type_object;
}
