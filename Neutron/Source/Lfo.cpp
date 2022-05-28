/*
  ==============================================================================

    Lfo.cpp
    Created: 28 May 2022 12:12:54am
    Author:  aurel

  ==============================================================================
*/

#include <JuceHeader.h>
#include "Lfo.h"

//==============================================================================
Lfo::Lfo()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.
    addAndMakeVisible(rateSlider);
    rateSlider.setSliderStyle(juce::Slider::Rotary);
    rateSlider.setTextBoxStyle(juce::Slider::NoTextBox, true, 0, 0);

    addAndMakeVisible(shapeSlider);
    shapeSlider.setSliderStyle(juce::Slider::Rotary);
    shapeSlider.setTextBoxStyle(juce::Slider::NoTextBox, true, 0, 0);
}

Lfo::~Lfo()
{
}

void Lfo::paint (juce::Graphics& g)
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
    g.drawText ("Lfo", getLocalBounds(),
                juce::Justification::centred, true);   // draw some placeholder text
}

void Lfo::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..
    rateSlider.setBounds(100, 30, 65, 65);
    shapeSlider.setBounds(45, 115, 80, 80);
}
