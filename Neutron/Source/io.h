/*
  ==============================================================================

    io.h
    Created: 28 May 2022 1:58:26am
    Author:  aurel

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

//==============================================================================
/*
*/
class io  : public juce::Component
{
public:
    bool isDragged{ false };
    int x;
    int y;
    bool plugged;
    int destx;
    int desty;
    bool isEntered{ false };
    float selectorWidth;
    float selectorHeight;
    float center;
    float paddingx{ 10.5 };
    float paddingy{ 11};
    io()
    {
        // In your constructor, you should add any child components, and
        // initialise any special settings that your component needs.
        x = -1;
        y = -1;
        plugged = false;
        desty, destx = -1;

        
        
    }

    ~io() override
    {
    }
    void setX(int newx)
    {
        x = newx;
    }
    void setY(int newY)
    {
        y = newY;
    }

    void paint (juce::Graphics& g) override
    {
        /* This demo code just fills the component's background and
           draws some placeholder text to get you started.

           You should replace everything in this method with your own
           drawing code..
        */

        //g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));   // clear the background

        g.setColour (juce::Colours::grey);
        g.drawRect (getLocalBounds(), 1);   // draw an outline around the component
        clr = juce::Colours::white;
        selectorHeight = getHeight()/2;
        selectorWidth = getWidth()/2;
        

        if (isEntered)
        {
            
            g.setColour(clr);
            g.fillEllipse(selectorWidth-paddingx, selectorHeight-paddingy, selectorWidth/1.2, selectorHeight/1.2);
            repaint();
        }
        else
        {
            clr = juce::Colours::black;
            repaint();
        }

        
        
        //g.setColour (juce::Colours::white);
        //g.setFont (14.0f);
        //g.drawText ("io", getLocalBounds(),juce::Justification::centred, true);   // draw some placeholder text
    }

    void resized() override
    {
        // This method is where you should set the bounds of any child
        // components that your component contains..

    }
    void mouseEnter(const juce::MouseEvent& event) override
    {
        isEntered = true;
        getParentComponent()->mouseDown(event);
        
    }
    void mouseExit(const juce::MouseEvent& event) override

    {
        isEntered = false;
        
    }
    void mouseDrag(const juce::MouseEvent& event) override
    {
        isDragged = true;
       
        const juce::MouseEvent& newevent= event.getEventRelativeTo(getParentComponent());
        getParentComponent()->mouseDrag(newevent);
        
    }
    void mouseUp(const juce::MouseEvent& event) override
    {
        
        if (isEntered && isDragged)
        {
            plugged = true;
            
            
        }
        isDragged = false;
        getParentComponent()->repaint();
    }
    bool selected{ false };
    void mouseDown(const juce::MouseEvent& event) override
    {
        selected = true;
        getParentComponent()->mouseDown(event);
    }
    void setDestX(int newdestX)
    {
        destx = newdestX;
    }
    void setDestY(int newdesty)
    {
        desty = newdesty;
    }
private:
    juce::Colour clr;
    




    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(io)
};
