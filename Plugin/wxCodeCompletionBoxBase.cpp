//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: wxCodeCompletionBox.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#include "wxCodeCompletionBoxBase.h"
#include "codelite_exports.h"

// Declare the bitmap loading function
extern void wxC9ED9AInitBitmapResources();

static bool bBitmapLoaded = false;

wxCodeCompletionBoxBase::wxCodeCompletionBoxBase(wxWindow* parent, long style)
    : wxPopupWindow(parent, style)
{
    if(!bBitmapLoaded) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxC9ED9AInitBitmapResources();
        bBitmapLoaded = true;
    }

    wxBoxSizer* mainSizer = new wxBoxSizer(wxHORIZONTAL);
    this->SetSizer(mainSizer);

    m_panelComposite =
        new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), wxTAB_TRAVERSAL);

    mainSizer->Add(m_panelComposite, 1, wxEXPAND, WXC_FROM_DIP(5));

    wxBoxSizer* boxSizer = new wxBoxSizer(wxHORIZONTAL);
    m_panelComposite->SetSizer(boxSizer);

    m_canvas = new wxPanel(m_panelComposite, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(m_panelComposite, wxSize(-1, -1)),
                           wxTAB_TRAVERSAL);

    boxSizer->Add(m_canvas, 1, wxALL | wxEXPAND, WXC_FROM_DIP(0));

    SetName(wxT("wxCodeCompletionBoxBase"));
    SetSize(wxDLG_UNIT(this, wxSize(-1, -1)));
    if(GetSizer()) { GetSizer()->Fit(this); }
    // Connect events
    m_canvas->Connect(wxEVT_PAINT, wxPaintEventHandler(wxCodeCompletionBoxBase::OnPaint), NULL, this);
    m_canvas->Connect(wxEVT_ERASE_BACKGROUND, wxEraseEventHandler(wxCodeCompletionBoxBase::OnEraseBackground), NULL,
                      this);
}

wxCodeCompletionBoxBase::~wxCodeCompletionBoxBase()
{
    m_canvas->Disconnect(wxEVT_PAINT, wxPaintEventHandler(wxCodeCompletionBoxBase::OnPaint), NULL, this);
    m_canvas->Disconnect(wxEVT_ERASE_BACKGROUND, wxEraseEventHandler(wxCodeCompletionBoxBase::OnEraseBackground), NULL,
                         this);
}
