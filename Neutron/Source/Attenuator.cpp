/*
  ==============================================================================

    Attenuator.cpp
    Created: 28 May 2022 12:56:12am
    Author:  aurel

  ==============================================================================
*/

#include <JuceHeader.h>
#include "Attenuator.h"

//==============================================================================
Attenuator::Attenuator()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.
    addAndMakeVisible(attenuator1Slider);
    attenuator1Slider.setSliderStyle(juce::Slider::Rotary);
    attenuator1Slider.setTextBoxStyle(juce::Slider::NoTextBox, true, 0, 0);

    addAndMakeVisible(attenuator2Slider);
    attenuator2Slider.setSliderStyle(juce::Slider::Rotary);
    attenuator2Slider.setTextBoxStyle(juce::Slider::NoTextBox, true, 0, 0);
    
}

Attenuator::~Attenuator()
{
}

void Attenuator::paint (juce::Graphics& g)
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
    g.drawText ("Attenuator", getLocalBounds(),
                juce::Justification::centred, true);   // draw some placeholder text
}

void Attenuator::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..
    attenuator1Slider.setBounds(5, 10, 65, 65);
    attenuator2Slider.setBounds(95, 10, 65, 65);

}
