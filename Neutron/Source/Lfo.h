/*
  ==============================================================================

    Lfo.h
    Created: 28 May 2022 12:12:54am
    Author:  aurel

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

//==============================================================================
/*
*/
class Lfo  : public juce::Component
{
public:
    Lfo();
    ~Lfo() override;

    void paint (juce::Graphics&) override;
    void resized() override;

private:
    juce::Slider shapeSlider;
    juce::Slider rateSlider;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Lfo)
};
