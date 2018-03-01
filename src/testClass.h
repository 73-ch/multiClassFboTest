#include "ofMain.h"


class testClass {
    
    
public:
    ofFbo fbo;
    ofShader shader;
    glm::vec3 color;
    
    testClass(int i);
    void begin();
    void end();
    ofTexture getTexture();
};
