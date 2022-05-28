/*
  ==============================================================================

    matrix.h
    Created: 28 May 2022 1:07:35am
    Author:  aurel

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "io.h"

//==============================================================================
/*
*/
class matrix  : public juce::Component
{
public:
    io* cableListLines  { new io[56] };
    //std::vector<io> cable;
    //io cables[7][8];
    //juce::Array<juce::Array<io>> cableListofLines[8];
    matrix();
    ~matrix() override;

    void paint (juce::Graphics&) override;
    void resized() override;
    void mouseDrag(const juce::MouseEvent& event) override;
    void paintOverChildren(juce::Graphics& g) override;
    void mouseUp(const juce::MouseEvent& event) override;
    void mouseDown(const juce::MouseEvent& event) override;

private:
    juce::Rectangle<float> rect{ juce::Rectangle<float>(0, 0, 30, 30) };
    int x{ 7 };
    int y{ 8 };

    //340 par 440
    float pixelx;
    float pixely;
    float paddingx{ 10 };
    float paddingy{ 3 };
    juce::Point<int> mousePos;
    juce::Point<int> clicPoint;
    bool isDragged{ false };
    int ioSelector;
    bool selecteur{ false };

    
    
    //io cable;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (matrix)
};

