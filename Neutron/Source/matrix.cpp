/*
  ==============================================================================

    matrix.cpp
    Created: 28 May 2022 1:07:35am
    Author:  aurel

  ==============================================================================
*/

#include <JuceHeader.h>
#include "matrix.h"


//==============================================================================

matrix::matrix()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.
    int j = 0;
    int f = 0;
    for (int i = 0; i < 56; i++)
    {
        cableListLines[i].setY(j);
        cableListLines[i].setX(f);
        if (j==7)
        {
            j = -1;
            f++;
        }

        j++;
        

    }
        
    for (int i = 0; i < 56; i++)
    {
        addAndMakeVisible(cableListLines[i]);
    }
   

    
}

matrix::~matrix()
{
}

void matrix::paint (juce::Graphics& g)
{
    /* This demo code just fills the component's background and
       draws some placeholder text to get you started.

       You should replace everything in this method with your own
       drawing code..
    */

    //g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));   // clear the background

    g.setColour (juce::Colours::grey);
    g.drawRect (getLocalBounds(), 1);   // draw an outline around the component

    if (isDragged)
    {
        g.setColour(juce::Colours::white);
        paintOverChildren(g);
    }
    //g.setColour (juce::Colours::white);
    //g.setFont (14.0f);
    //g.drawText ("matrix", getLocalBounds(),
     //           juce::Justification::centred, true);   // draw some placeholder text


    //g.drawEllipse(rect, 1);

    //DRAW CABLES
    for (int i = 0; i < 56; i++)
    {
        if (cableListLines[i].plugged!=0)
        {
            juce::Line<float> line(cableListLines[i].x, cableListLines[i].y, cableListLines[i].destx, cableListLines[i].desty);
            g.drawLine(line,5);
        }
    }

}
void matrix::mouseDrag(const juce::MouseEvent& event)
{
    
    mousePos = event.getPosition();
    clicPoint = event.getMouseDownPosition();
    //mouseDrag(event);
    isDragged = true;
    
}

void matrix::mouseUp(const juce::MouseEvent& event)
{
    if (isDragged)
    {
        for (int i = 0; i < 56; i++)
        {

            if (cableListLines[i].isEntered)
            {
                //cableListLines[ioSelector].setDestX(cableListLines[i].x);
                //cableListLines[ioSelector].setDestY(cableListLines[i].y);
                break;

            }
        }
    }
    isDragged = false;
    repaint();
}
void matrix::paintOverChildren(juce::Graphics& g)
{
    //juce::Line<int> line = juce::Line<int>(mousePos, clicPoint);
    if (isDragged)
    {
        g.drawLine(mousePos.x, mousePos.y, clicPoint.x, clicPoint.y, 10);
    }
    
    repaint();

}
void matrix::mouseDown(const juce::MouseEvent& event)
{
    //mousePos = event.getPosition();
    //if (isDragged)
    //{
        //clicPoint = event.getMouseDownPosition();
    //}
    //std::unique_ptr<io> myPtr;

   /* for (int i = 0; i < 56; i++)
    {
        if (!selecteur)
        {
            if (cableListLines[i].isEntered)
            {
                ioSelector = i;
                break;

            }
            if (cableListLines[i].selected)
            {
                ioSelector = i;
                break;
            }
            selecteur = true;
        }
        else
        {
            if (cableListLines[i].selected)
            {
                cableListLines[ioSelector].setDestX(cableListLines[i].x);
                cableListLines[ioSelector].setDestY(cableListLines[i].y);
                selecteur = false;
                cableListLines[ioSelector].selected = false;
                cableListLines[i].selected = false;
            }
        }
    }*/
    

}
void matrix::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..
    pixelx = getWidth() / 7;
    pixely = getHeight() / 8;
    for (int i = 0; i < 56; i++)
    {
        auto &value = cableListLines[i];
        cableListLines[i].setBounds(paddingx+(pixelx * value.x), (paddingy + pixely * value.y), pixelx- paddingx, pixely- paddingy);
    }
}
