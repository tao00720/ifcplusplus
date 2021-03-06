/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <map>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/IFC4/include/IfcFillStyleSelect.h"
#include "ifcpp/IFC4/include/IfcColour.h"

// TYPE IfcColour = SELECT	(IfcColourSpecification	,IfcPreDefinedColour);
shared_ptr<IfcColour> IfcColour::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.size() == 0 ){ return shared_ptr<IfcColour>(); }
	if( arg.compare(L"$")==0 )
	{
		return shared_ptr<IfcColour>();
	}
	if( arg.compare(L"*")==0 )
	{
		return shared_ptr<IfcColour>();
	}
	shared_ptr<IfcColour> result_object;
	readSelectType( arg, result_object, map );
	return result_object;
}
