/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcDerivedMeasureValue.h"
#include "ifcpp/IFC4/include/IfcMonetaryMeasure.h"

// TYPE IfcMonetaryMeasure = REAL;
IfcMonetaryMeasure::IfcMonetaryMeasure() {}
IfcMonetaryMeasure::IfcMonetaryMeasure( double value ) { m_value = value; }
IfcMonetaryMeasure::~IfcMonetaryMeasure() {}
shared_ptr<IfcPPObject> IfcMonetaryMeasure::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcMonetaryMeasure> copy_self( new IfcMonetaryMeasure() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcMonetaryMeasure::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCMONETARYMEASURE("; }
	stream << m_value;
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IfcMonetaryMeasure> IfcMonetaryMeasure::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcMonetaryMeasure>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcMonetaryMeasure>(); }
	shared_ptr<IfcMonetaryMeasure> type_object( new IfcMonetaryMeasure() );
	readReal( arg, type_object->m_value );
	return type_object;
}
