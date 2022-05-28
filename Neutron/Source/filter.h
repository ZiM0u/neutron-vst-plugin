/*
  ==============================================================================

    filter.h
    Created: 28 May 2022 12:00:58am
    Author:  aurel

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

//==============================================================================
/*
*/
class filter  : public juce::Component
{
public:
    filter();
    ~filter() override;

    void paint (juce::Graphics&) override;
    void resized() override;

private:
    juce::Slider cutoffSlider;
    juce::Slider resoSlider;
    juce::Slider modDepthSlider;
    juce::Slider envDepthSlider;
    juce::ComboBox filterModeBox;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (filter)
};
