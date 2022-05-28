/*
  ==============================================================================

    Attenuator.h
    Created: 28 May 2022 12:56:12am
    Author:  aurel

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

//==============================================================================
/*
*/
class Attenuator  : public juce::Component
{
public:
    Attenuator();
    ~Attenuator() override;

    void paint (juce::Graphics&) override;
    void resized() override;

private:
    juce::Slider attenuator1Slider;
    juce::Slider attenuator2Slider;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Attenuator)
};
