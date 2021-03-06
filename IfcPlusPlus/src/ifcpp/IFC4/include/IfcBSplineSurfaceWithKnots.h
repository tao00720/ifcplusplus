/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"
#include "IfcBSplineSurface.h"
class IFCPP_EXPORT IfcInteger;
class IFCPP_EXPORT IfcParameterValue;
class IFCPP_EXPORT IfcKnotType;
//ENTITY
class IFCPP_EXPORT IfcBSplineSurfaceWithKnots : public IfcBSplineSurface
{ 
public:
	IfcBSplineSurfaceWithKnots();
	IfcBSplineSurfaceWithKnots( int id );
	~IfcBSplineSurfaceWithKnots();
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const map_t<int,shared_ptr<IfcPPEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self );
	virtual size_t getNumAttributes() { return 12; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcBSplineSurfaceWithKnots"; }


	// IfcRepresentationItem -----------------------------------------------------------
	// inverse attributes:
	//  std::vector<weak_ptr<IfcPresentationLayerAssignment> >	m_LayerAssignment_inverse;
	//  std::vector<weak_ptr<IfcStyledItem> >					m_StyledByItem_inverse;

	// IfcGeometricRepresentationItem -----------------------------------------------------------

	// IfcSurface -----------------------------------------------------------

	// IfcBoundedSurface -----------------------------------------------------------

	// IfcBSplineSurface -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcInteger>									m_UDegree;
	//  shared_ptr<IfcInteger>									m_VDegree;
	//  std::vector<std::vector<shared_ptr<IfcCartesianPoint> > >	m_ControlPointsList;
	//  shared_ptr<IfcBSplineSurfaceForm>						m_SurfaceForm;
	//  shared_ptr<IfcLogical>									m_UClosed;
	//  shared_ptr<IfcLogical>									m_VClosed;
	//  shared_ptr<IfcLogical>									m_SelfIntersect;

	// IfcBSplineSurfaceWithKnots -----------------------------------------------------------
	// attributes:
	std::vector<shared_ptr<IfcInteger> >					m_UMultiplicities;
	std::vector<shared_ptr<IfcInteger> >					m_VMultiplicities;
	std::vector<shared_ptr<IfcParameterValue> >				m_UKnots;
	std::vector<shared_ptr<IfcParameterValue> >				m_VKnots;
	shared_ptr<IfcKnotType>									m_KnotSpec;
};

