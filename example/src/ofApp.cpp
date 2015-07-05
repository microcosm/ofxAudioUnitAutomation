#include "ofApp.h"

void ofApp::setup(){
    unit = ofxAudioUnit('aumu', 'ncut', 'TOGU');
    unit.showUI();
    unit.connectTo(output);
    output.start();

    midiIn.createMidiDestination("ofxAudioUnitAutomation");
    midiIn.routeMidiTo(unit);
    midiOut.openPort("ofxAudioUnitAutomation");
}

void ofApp::update(){
    if(ofGetFrameNum() == 0) {
        midiOut.sendNoteOn(1, 60);
    }
}

void ofApp::draw(){

}

void ofApp::exit() {
    midiOut.closePort();
}

void ofApp::keyPressed(int key){

}

void ofApp::keyReleased(int key){

}

void ofApp::mouseMoved(int x, int y){

}

void ofApp::mouseDragged(int x, int y, int button){

}

void ofApp::mousePressed(int x, int y, int button){

}

void ofApp::mouseReleased(int x, int y, int button){

}

void ofApp::windowResized(int w, int h){

}

void ofApp::gotMessage(ofMessage msg){

}

void ofApp::dragEvent(ofDragInfo dragInfo){

}