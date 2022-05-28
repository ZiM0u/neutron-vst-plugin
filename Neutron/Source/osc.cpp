/*
  ==============================================================================

    osc.cpp
    Created: 27 May 2022 11:15:40pm
    Author:  aurel

  ==============================================================================
*/

#include <JuceHeader.h>
#include "osc.h"

//==============================================================================
osc::osc()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.
    addAndMakeVisible(tuneSlider);
    tuneSlider.setSliderStyle(juce::Slider::Rotary);
    tuneSlider.setTextBoxStyle(juce::Slider::NoTextBox,true,0,0);

    addAndMakeVisible(shapeSlider);
    shapeSlider.setSliderStyle(juce::Slider::Rotary);
    shapeSlider.setTextBoxStyle(juce::Slider::NoTextBox, true, 0, 0);

    addAndMakeVisible(widthSlider);
    widthSlider.setSliderStyle(juce::Slider::Rotary);
    widthSlider.setTextBoxStyle(juce::Slider::NoTextBox, true, 0, 0);
}

osc::~osc()
{
    
}

void osc::paint (juce::Graphics& g)
{
    /* This demo code just fills the component's background and
       draws some placeholder text to get you started.

       You should replace everything in this method with your own
       drawing code..
    */

    //g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));   // clear the background

    g.setColour (juce::Colours::grey);
    g.drawRect (getLocalBounds(), 1);   // draw an outline around the component

    g.setColour (juce::Colours::white);
    g.setFont (14.0f);
    g.drawText ("osc", getLocalBounds(),
                juce::Justification::centred, true);   // draw some placeholder text
}

void osc::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..
    tuneSlider.setBounds(35,20,100,100);
    shapeSlider.setBounds(52, 160, 70, 70);
    widthSlider.setBounds(52, 268, 70, 70);

}
