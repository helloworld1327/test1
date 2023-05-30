a = HYPERLINK(link_location, [friendly_name])

# MITRE, CWE-94 in python
from flask import request, render_template_string

# /hello?username={{config}} will display the entire flask configuration and potential secrets
@app.route('/hello')
def hello():
    username = request.args.get('username')
    template = f"<p>Hello {nameplease}</p>"
    return render_template_string(template)
