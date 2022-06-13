from django.shortcuts import render
from django.views.generic import TemplateView

# Create your views here.

class HomePage(TemplateView):
    template_name = 'home.html'
    
class AboutPage(TemplateView):
    template_name = 'about.html'
    
class ContactPage(TemplateView):
    template_name = 'contact.html'
    
class InfoPage(TemplateView):
    template_name = 'info.html'