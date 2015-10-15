// Created on: 1993-03-10
// Created by: JCV
// Copyright (c) 1993-1999 Matra Datavision
// Copyright (c) 1999-2014 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

#ifndef _Geom_ElementarySurface_HeaderFile
#define _Geom_ElementarySurface_HeaderFile

#include <Standard.hxx>
#include <Standard_Type.hxx>

#include <gp_Ax3.hxx>
#include <Geom_Surface.hxx>
#include <Standard_Real.hxx>
#include <GeomAbs_Shape.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Integer.hxx>
class Standard_ConstructionError;
class gp_Ax1;
class gp_Pnt;
class gp_Ax3;


class Geom_ElementarySurface;
DEFINE_STANDARD_HANDLE(Geom_ElementarySurface, Geom_Surface)

//! Describes the common behavior of surfaces which
//! have a simple parametric equation in a local
//! coordinate system. The Geom package provides
//! several implementations of concrete elementary surfaces:
//! - the plane, and
//! - four simple surfaces of revolution: the cylinder, the
//! cone, the sphere and the torus.
//! An elementary surface inherits the common behavior
//! of Geom_Surface surfaces. Furthermore, it is located
//! in 3D space by a coordinate system (a gp_Ax3
//! object) which is also its local coordinate system.
//! Any elementary surface is oriented, i.e. the normal
//! vector is always defined, and gives the same
//! orientation to the surface, at any point on the surface.
//! In topology this property is referred to as the "outside
//! region of the surface". This orientation is related to
//! the two parametric directions of the surface.
//! Rotation of a surface around the "main Axis" of its
//! coordinate system, in the trigonometric sense given
//! by the "X Direction" and the "Y Direction" of the
//! coordinate system, defines the u parametric direction
//! of that elementary surface of revolution. This is the
//! default construction mode.
//! It is also possible, however, to change the orientation
//! of a surface by reversing one of the two parametric
//! directions: use the UReverse or VReverse functions
//! to change the orientation of the normal at any point on the surface.
//! Warning
//! The local coordinate system of an elementary surface
//! is not necessarily direct:
//! - if it is direct, the trigonometric sense defined by its
//! "main Direction" is the same as the trigonometric
//! sense defined by its two vectors "X Direction" and "Y Direction":
//! "main Direction" = "X Direction" ^ "Y Direction"
//! - if it is indirect, the two definitions of trigonometric
//! sense are opposite:
//! "main Direction" = - "X Direction" ^ "Y Direction"
class Geom_ElementarySurface : public Geom_Surface
{

public:

  

  //! Changes the main axis (ZAxis) of the elementary surface.
  //!
  //! Raised if the direction of A1 is parallel to the XAxis of the
  //! coordinate system of the surface.
  Standard_EXPORT void SetAxis (const gp_Ax1& A1);
  

  //! Changes the location of the local coordinates system of the
  //! surface.
  Standard_EXPORT void SetLocation (const gp_Pnt& Loc);
  

  //! Changes the local coordinates system of the surface.
  Standard_EXPORT void SetPosition (const gp_Ax3& A3);
  

  //! Returns the main axis of the surface (ZAxis).
  Standard_EXPORT gp_Ax1 Axis() const;
  

  //! Returns the location point of the local coordinate system of the
  //! surface.
  Standard_EXPORT gp_Pnt Location() const;
  
  //! Returns the local coordinates system of the surface.
  Standard_EXPORT const gp_Ax3& Position() const;
  

  //! Reverses the U parametric direction of the surface.
  Standard_EXPORT virtual void UReverse();
  
  //! Return the  parameter on the  Ureversed surface for
  //! the point of parameter U on <me>.
  //!
  //! me->UReversed()->Value(me->UReversedParameter(U),V)
  //! is the same point as
  //! me->Value(U,V)
  Standard_EXPORT virtual Standard_Real UReversedParameter (const Standard_Real U) const = 0;
  

  //! Reverses the V parametric direction of the surface.
  Standard_EXPORT virtual void VReverse();
  
  //! Return the  parameter on the  Vreversed surface for
  //! the point of parameter V on <me>.
  //!
  //! me->VReversed()->Value(U,me->VReversedParameter(V))
  //! is the same point as
  //! me->Value(U,V)
  Standard_EXPORT virtual Standard_Real VReversedParameter (const Standard_Real V) const = 0;
  
  //! Returns GeomAbs_CN, the global continuity of any elementary surface.
  Standard_EXPORT GeomAbs_Shape Continuity() const;
  
  //! Returns True.
  Standard_EXPORT Standard_Boolean IsCNu (const Standard_Integer N) const;
  
  //! Returns True.
  Standard_EXPORT Standard_Boolean IsCNv (const Standard_Integer N) const;




  DEFINE_STANDARD_RTTI(Geom_ElementarySurface,Geom_Surface)

protected:


  gp_Ax3 pos;


private:




};







#endif // _Geom_ElementarySurface_HeaderFile