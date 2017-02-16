#include "cinder/app/App.h"
#include "cinder/app/RendererGl.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class MoreParticlesApp : public App {
  public:
	void setup() override;
	void mouseDown( MouseEvent event ) override;
	void update() override;
	void draw() override;
};

void MoreParticlesApp::setup()
{
}

void MoreParticlesApp::mouseDown( MouseEvent event )
{
}

void MoreParticlesApp::update()
{
}

void MoreParticlesApp::draw()
{
	gl::clear( Color( 0, 0, 0 ) ); 
}

CINDER_APP( MoreParticlesApp, RendererGl )
