/*
  ==============================================================================

    SH.h
    Created: 28 May 2022 12:43:17am
    Author:  aurel

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

//==============================================================================
/*
*/
class SH  : public juce::Component
{
public:
    SH();
    ~SH() override;

    void paint (juce::Graphics&) override;
    void resized() override;

private:
    juce::Slider rateSlider;
    juce::Slider glideSlider;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (SH)
};
