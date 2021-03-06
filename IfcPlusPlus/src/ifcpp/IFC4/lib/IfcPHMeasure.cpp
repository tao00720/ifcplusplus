/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcDerivedMeasureValue.h"
#include "ifcpp/IFC4/include/IfcPHMeasure.h"

// TYPE IfcPHMeasure = REAL;
IfcPHMeasure::IfcPHMeasure() {}
IfcPHMeasure::IfcPHMeasure( double value ) { m_value = value; }
IfcPHMeasure::~IfcPHMeasure() {}
shared_ptr<IfcPPObject> IfcPHMeasure::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcPHMeasure> copy_self( new IfcPHMeasure() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcPHMeasure::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCPHMEASURE("; }
	stream << m_value;
	if( is_select_type ) { stream << ")"; }
}
shared_ptr<IfcPHMeasure> IfcPHMeasure::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcPHMeasure>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcPHMeasure>(); }
	shared_ptr<IfcPHMeasure> type_object( new IfcPHMeasure() );
	readReal( arg, type_object->m_value );
	return type_object;
}
