#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofEnableAlphaBlending();
    ofSetVerticalSync(false);
    
    for (int i = 0; i < 10; i++) {
        scenes.push_back(*new testClass(i));
    }
    
    main_shader.load("main_vertex.glsl", "main_fragment.glsl");
    
    plane.set(ofGetWidth(), ofGetHeight());
    plane.setPosition(0, 0, 0);
    plane.enableTextures();
}

//--------------------------------------------------------------
void ofApp::update(){
    int i =0;
    for (auto s : scenes) {
        s.begin();
        ofDrawRectangle(0,0, ofGetWidth(), ofGetHeight());
//        s.shader.setUniform4f("color", glm::vec4(ofRandom(1.0), ofRandom(1.0), ofRandom(1.0), ofRandom(1.0)));
//        ofDrawRectangle(i * 100, 0, ofNoise(i, ofGetElapsedTimef()/3)* 100., ofGetHeight());
//        ofDrawRectangle(0,0, 100, 100);
        s.end();
        i++;
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
//    int i = 0;
//    for (auto s : scenes) {
//        s.getTexture().draw(0,0);
//        s.getTexture().draw(i * 100,0, 100, 100);
//        i++;
//    }
//
    
    GLint texes[10];
    
    vector<ofTexture> ts;
    
    main_shader.begin();
    main_shader.setUniform2f("u_resolution", ofGetWidth(), ofGetHeight());
    for (int i = 0; i< scenes.size(); i++) {
        ts.push_back(scenes[i].getTexture());
    }
    
    main_shader.setUniformArrayTexture("tex", ts);

    plane.draw();
    main_shader.end();
    
    for (int i = 0; i < scenes.size(); ++i) {
        scenes[i].getTexture().draw(i*100,0,100,100);
    }

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
