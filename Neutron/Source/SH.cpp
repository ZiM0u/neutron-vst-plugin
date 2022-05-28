/*
  ==============================================================================

    SH.cpp
    Created: 28 May 2022 12:43:17am
    Author:  aurel

  ==============================================================================
*/

#include <JuceHeader.h>
#include "SH.h"

//==============================================================================
SH::SH()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.
    addAndMakeVisible(rateSlider);
    rateSlider.setSliderStyle(juce::Slider::Rotary);
    rateSlider.setTextBoxStyle(juce::Slider::NoTextBox, true, 0, 0);

    addAndMakeVisible(glideSlider);
    glideSlider.setSliderStyle(juce::Slider::Rotary);
    glideSlider.setTextBoxStyle(juce::Slider::NoTextBox, true, 0, 0);
}

SH::~SH()
{
}

void SH::paint (juce::Graphics& g)
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
    g.drawText ("SH", getLocalBounds(),
                juce::Justification::centred, true);   // draw some placeholder text
}

void SH::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..
    rateSlider.setBounds(5, 10, 65, 65);
    glideSlider.setBounds(95, 10, 65, 65);

}
