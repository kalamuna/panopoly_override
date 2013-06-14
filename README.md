The Treatment
=============

We are using this method to override and extend panopoly features without 
introducing "overridden" statuses. 
  
We are somewhat "hijacking" the functional namespaces of the modules to be 
extended. This means that we need to check to see whether these functions have 
been defined yet otherwise we will be breaking lots of shit.
  
You might not want to use this method in combination with features override 
and you should only try to implement these hooks using a 
EXTENDEDMODULE/TAG_override namespacing. If you want to provide an override 
of an override you should be able to continue this procedure indefinitely. 

```
Example: Overriding panopoly_wysiwyg variables
  module name  : panopoly_override/panopoly_wysiwyg_override
  include file : panopoly_override/features/panopoly_wysiwyg.inc
  hook name    : panopoly_wysiwyg_strongarm_alter()
      
Example: Overriding panopoly_wysiqyg_override variables:
  module name  : panopoly_override_override
  include file : panopoly_override_override/features/
                 panopoly_wysiwyg_override.inc
  hook name    : panopoly_wysiwyg_strongarm_alter()
```
      
To be honest I haven't actually tried the recursive override yet so its possible
it just doesn't even work. Definitely need to make sure that 
panopoly_override_override alters run after panopoly_override... which should be 
the default behavior because of our choice of namespace.
  
It is also important to note that you cannot alter the "dependency" component or 
the components listed in a features include file the same way as the other 
components. In order to "override" a dependency you need to invoke 
EXTENDEDMODULE_system_info_alter. 

Global Overrides vs Site Specific Overrides
===========================================

We think it is a good idea to have seperate conventions for extending/overriding 
components that have either "universal" or local scope. For example if you are 
a large University using a panopoly sub-distribution and you override certain 
panopoly features on EVERY site in this distro you probably want to put these 
overrides into a seperate "panopoly_override" module. This way you can easily 
identify and deploy these changes.  

However, if you have a override that is applicable to a single site. You might want 
to bundle in an override to a feature that makes sense. For example.

```
example_admin.module
example_admin/overrides/panopoly_admin.inc
```
  
We think that it is a good to try and mimic the feature seperation used in 
panopoly in other features so there is a consistent way to group funtionality.
Here is a list of panopoly features and a hypothetical list of additional features

```
panopoly_admin       =>    example_admin
panopoly_core        =>    example_core
panopoly_images      =>    example_images
panopoly_magic       =>    example_magic
panopoly_pages       =>    example_pages
panopoly_theme       =>    example_theme 
panopoly_users       =>    example_users
panopoly_widgets     =>    example_widgets
panopoly_wysiwyg     =>    example_wysiywg
```
Default Hooks
=============

This module only contains a brief list of hooks to override exportable components. 
For a more complete list of hooks please check out:
https://kalamuna.atlassian.net/wiki/display/KALA/Panopoly+Override
