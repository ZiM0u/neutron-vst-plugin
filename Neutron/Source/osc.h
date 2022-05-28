/*
  ==============================================================================

    osc.h
    Created: 27 May 2022 11:15:40pm
    Author:  aurel

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

//==============================================================================
/*
*/
class osc  : public juce::Component
{
public:
    osc();
    ~osc() override;

    void paint (juce::Graphics&) override;
    void resized() override;

private:
    juce::Slider tuneSlider;
    juce::Slider shapeSlider;
    juce::Slider widthSlider;
    juce::Slider rangeButton;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (osc)
};
