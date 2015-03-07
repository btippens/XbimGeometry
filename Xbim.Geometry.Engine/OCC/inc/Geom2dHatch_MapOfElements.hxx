// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Geom2dHatch_MapOfElements_HeaderFile
#define _Geom2dHatch_MapOfElements_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BasicMap.hxx>
#include <Standard_Integer.hxx>
#include <Handle_Geom2dHatch_DataMapNodeOfMapOfElements.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Address.hxx>
class Standard_DomainError;
class Standard_NoSuchObject;
class Geom2dHatch_Element;
class TColStd_MapIntegerHasher;
class Geom2dHatch_DataMapNodeOfMapOfElements;
class Geom2dHatch_DataMapIteratorOfMapOfElements;



class Geom2dHatch_MapOfElements  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT Geom2dHatch_MapOfElements(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   Geom2dHatch_MapOfElements& Assign (const Geom2dHatch_MapOfElements& Other) ;
  Geom2dHatch_MapOfElements& operator = (const Geom2dHatch_MapOfElements& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~Geom2dHatch_MapOfElements()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Boolean Bind (const Standard_Integer& K, const Geom2dHatch_Element& I) ;
  
  Standard_EXPORT   Standard_Boolean IsBound (const Standard_Integer& K)  const;
  
  Standard_EXPORT   Standard_Boolean UnBind (const Standard_Integer& K) ;
  
  Standard_EXPORT  const  Geom2dHatch_Element& Find (const Standard_Integer& K)  const;
 const  Geom2dHatch_Element& operator() (const Standard_Integer& K)  const
{
  return Find(K);
}
  
  Standard_EXPORT   Geom2dHatch_Element& ChangeFind (const Standard_Integer& K) ;
  Geom2dHatch_Element& operator() (const Standard_Integer& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT   Standard_Address Find1 (const Standard_Integer& K)  const;
  
  Standard_EXPORT   Standard_Address ChangeFind1 (const Standard_Integer& K) ;




protected:





private:

  
  Standard_EXPORT Geom2dHatch_MapOfElements(const Geom2dHatch_MapOfElements& Other);




};







#endif // _Geom2dHatch_MapOfElements_HeaderFile