/*
  ==============================================================================

    filter.cpp
    Created: 28 May 2022 12:00:58am
    Author:  aurel

  ==============================================================================
*/

#include <JuceHeader.h>
#include "filter.h"

//==============================================================================
filter::filter()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.
    addAndMakeVisible(cutoffSlider);
    cutoffSlider.setSliderStyle(juce::Slider::Rotary);
    cutoffSlider.setTextBoxStyle(juce::Slider::NoTextBox, true, 0, 0);

    addAndMakeVisible(resoSlider);
    resoSlider.setSliderStyle(juce::Slider::Rotary);
    resoSlider.setTextBoxStyle(juce::Slider::NoTextBox, true, 0, 0);

    addAndMakeVisible(modDepthSlider);
    modDepthSlider.setSliderStyle(juce::Slider::Rotary);
    modDepthSlider.setTextBoxStyle(juce::Slider::NoTextBox, true, 0, 0);

    addAndMakeVisible(envDepthSlider);
    envDepthSlider.setSliderStyle(juce::Slider::Rotary);
    envDepthSlider.setTextBoxStyle(juce::Slider::NoTextBox, true, 0, 0);
}

filter::~filter()
{
}

void filter::paint (juce::Graphics& g)
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
    g.drawText ("filter", getLocalBounds(),
                juce::Justification::centred, true);   // draw some placeholder text
}

void filter::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..
    cutoffSlider.setBounds(10,30,65,65);
    resoSlider.setBounds(10, 137, 65, 65);
    modDepthSlider.setBounds(10, 243, 65, 65);
    envDepthSlider.setBounds(10, 350, 65, 65);



}
