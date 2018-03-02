//
//  testClass.cpp
//  multiClassFboTest
//
//  Created by nami on 2018/02/11.
//
//

#include "testClass.h"

testClass::testClass (int i) {
    fbo.allocate(ofGetWidth(), ofGetHeight());
    shader.load("vertex.glsl", "fragment.glsl");
//    color = glm::vec3(0.1, 0.1, 0.1);
    color = glm::vec3(ofRandom(1.0), ofRandom(1.0),ofRandom(1.0));
}

void testClass::begin() {
    fbo.begin();
    ofClear(0, 0, 0);
    shader.begin();
    shader.setUniform3f("color", color);
    
}

void testClass::end() {
    shader.end();
    fbo.end();
}

ofTexture testClass::getTexture() {
    return fbo.getTexture();
}