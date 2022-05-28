/*
  ==============================================================================

    Env.cpp
    Created: 27 May 2022 11:44:12pm
    Author:  aurel

  ==============================================================================
*/

#include <JuceHeader.h>
#include "Env.h"

//==============================================================================
Env::Env()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.
    addAndMakeVisible(attackSlider);
    attackSlider.setSliderStyle(juce::Slider::Rotary);
    attackSlider.setTextBoxStyle(juce::Slider::NoTextBox, true, 0, 0);

    addAndMakeVisible(decaySlider);
    decaySlider.setSliderStyle(juce::Slider::Rotary);
    decaySlider.setTextBoxStyle(juce::Slider::NoTextBox, true, 0, 0);

    addAndMakeVisible(sustainSlider);
    sustainSlider.setSliderStyle(juce::Slider::Rotary);
    sustainSlider.setTextBoxStyle(juce::Slider::NoTextBox, true, 0, 0);

    addAndMakeVisible(releaseSlider);
    releaseSlider.setSliderStyle(juce::Slider::Rotary);
    releaseSlider.setTextBoxStyle(juce::Slider::NoTextBox, true, 0, 0);
}

Env::~Env()
{
}

void Env::paint (juce::Graphics& g)
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
    g.drawText ("Env", getLocalBounds(),
                juce::Justification::centred, true);   // draw some placeholder text
}

void Env::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..
    attackSlider.setBounds(8,4,65,65);
    decaySlider.setBounds(100, 4, 65, 65);
    sustainSlider.setBounds(188, 4, 65, 65);
    releaseSlider.setBounds(280, 4, 65, 65);
}
