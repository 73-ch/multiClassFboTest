#include "ofMain.h"
#include "/Users/Namikawa/Desktop/openframeworks/openFrameworks-master/addons/ofxShaderTex/src/ofxShaderTex.h"


class testClass {
    
    
public:
    ofFbo fbo;
    ofxShaderTex shader;
    glm::vec3 color;
    
    testClass(int i);
    void begin();
    void end();
    ofTexture getTexture();
};
