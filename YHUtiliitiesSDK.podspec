
Pod::Spec.new do |s|

  s.name         = "YHUtiliitiesSDK"
  s.version      = "1.0.0"
  s.summary      = "公司基础SDK之一"

  s.description  = "通用帮助类SDK，提供各种便捷的Helper。例如：YHDataHelper、YHDeviceHelper、YHGestureHelper、YHImageHelper、YHViewHelper等"

  s.homepage     = "https://github.com/XmYlzYhkj/YHUtiliitiesSDK"

  s.license      = "MIT"

  s.author       = { "XmYhkj" => "yhkj_xm@163.com" }
  s.platform     = :ios, "8.0"

  s.source       = { :git => "https://github.com/XmYlzYhkj/YHUtiliitiesSDK.git", :tag => "1.0.0" }

  #s.source_files  = "Classes", "Classes/*"

  s.requires_arc = true

  s.vendored_frameworks = ["Frameworks/YHUtiliitiesSDK.framework"]
  
end
