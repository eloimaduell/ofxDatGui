#pragma once

#include "ofMain.h"
#include "ofxDatGui.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
		
        ofxDatGuiTextInput* input;
        void onTextInputEvent(ofxDatGuiTextInputEvent e);
    void onParagraphEvent(ofxDatGuiParagraphEvent e);
    
        ofTrueTypeFont font;
    
    ofxDatGui* gui;
    
};
