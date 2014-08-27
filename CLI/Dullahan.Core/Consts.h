/*
  Dullahan project - a managed code assembly wrapper around PhantomJS

  Copyright (C) 2014 Lee Sanderson <lee.sanderson@kaonix.com>

  This file was originally part of the PhantomJS project from Ofi Labs.

  Copyright (C) 2011 Ariya Hidayat <ariya.hidayat@gmail.com>
  Copyright (C) 2011 Ivan De Marino <ivan.de.marino@gmail.com>
  Copyright (C) 2011 James Roe <roejames12@hotmail.com>

  Changes: None
*/

#ifndef CONSTS_H
#define CONSTS_H

#define PHANTOMJS_VERSION_MAJOR     1
#define PHANTOMJS_VERSION_MINOR     9
#define PHANTOMJS_VERSION_PATCH     7
#define PHANTOMJS_VERSION_STRING    "1.9.7"

#define COFFEE_SCRIPT_EXTENSION     ".coffee"

#define JS_ELEMENT_CLICK "(function (el) { " \
        "var ev = document.createEvent('MouseEvents');" \
        "ev.initEvent(\"click\", true, true);" \
        "el.dispatchEvent(ev);" \
    "})(this);"

#define JS_APPEND_SCRIPT_ELEMENT "var el = document.createElement('script');" \
    "el.onload = function() { alert('%1'); };" \
    "el.src = '%1';" \
    "document.body.appendChild(el);"

#define PAGE_SETTINGS_LOAD_IMAGES           "loadImages"
#define PAGE_SETTINGS_JS_ENABLED            "javascriptEnabled"
#define PAGE_SETTINGS_XSS_AUDITING          "XSSAuditingEnabled"
#define PAGE_SETTINGS_USER_AGENT            "userAgent"
#define PAGE_SETTINGS_LOCAL_ACCESS_REMOTE   "localToRemoteUrlAccessEnabled"
#define PAGE_SETTINGS_USERNAME              "userName"
#define PAGE_SETTINGS_PASSWORD              "password"
#define PAGE_SETTINGS_MAX_AUTH_ATTEMPTS     "maxAuthAttempts"
#define PAGE_SETTINGS_RESOURCE_TIMEOUT      "resourceTimeout"
#define PAGE_SETTINGS_WEB_SECURITY_ENABLED  "webSecurityEnabled"
#define PAGE_SETTINGS_JS_CAN_OPEN_WINDOWS   "javascriptCanOpenWindows"
#define PAGE_SETTINGS_JS_CAN_CLOSE_WINDOWS  "javascriptCanCloseWindows"

#define DEFAULT_WEBDRIVER_CONFIG            "127.0.0.1:8910"

#endif // CONSTS_H
