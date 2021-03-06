#ifndef CShapeVectorH
#define CShapeVectorH

// Based on Chai3d CShapeLine class

#include "scenegraph/CGenericObject.h"
#include "graphics/CMaterial.h"

class cShapeVector : public cGenericObject
{
  public:

    //-----------------------------------------------------------------------
    // CONSTRUCTOR & DESTRUCTOR:
    //-----------------------------------------------------------------------

    //! Constructor of cShapeVector.
    cShapeVector(const cVector3d& a_pointA, const cVector3d& a_pointB, double a_headSize, double a_lineWidth);

    //! Destructor of cShapeVector.
    virtual ~cShapeVector() {};

    //-----------------------------------------------------------------------
    // METHODS:
    //-----------------------------------------------------------------------

    //! Render object in OpenGL.
    virtual void render(const int a_renderMode=0);

    //! Update bounding box of current object.
    virtual void updateBoundaryBox();

    //! Object scaling.
    virtual void scaleObject(const cVector3d& a_scaleFactors);

    //! Update the geometric relationship between the tool and the current object.
    virtual void computeLocalInteraction(const cVector3d& a_toolPos,
                                         const cVector3d& a_toolVel,
                                         const unsigned int a_IDN);

    //-----------------------------------------------------------------------
    // MEMBERS:
    //-----------------------------------------------------------------------

    //! Point A of line.
    cVector3d m_pointA;

    //! Point A of line.
    cVector3d m_pointB;

    double m_headSize;
    double m_lineWidth;

    //! Color of point A of line.
    cColorf m_ColorPointA;

    //! Color of point B of line.
    cColorf m_ColorPointB;
};

//---------------------------------------------------------------------------
#endif
//---------------------------------------------------------------------------
